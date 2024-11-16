#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include <vector>

#define WINDOW_WIDTH 1497
#define WINDOW_HEIGHT 998
#define SIDEBAR_WIDTH 449
#define MESSAGE_INPUT_HEIGHT 65
#define SCROLL_SPEED 20

#define COLOR_GRAY (Color){69, 69, 69, 255}

// Structs for data organization
struct Message {
    std::string text;
    bool isAssistant;
};

struct Conversation {
    std::vector<Message> messages;
};

// Class for handling API requests
class ChatGPTAPI {
public:
    static std::string GetResponse(const std::string& userMessage);
private:
    static size_t WriteCallback(void* content, size_t size, size_t nmemb, void* userp);
};



// Implementation for the ChatGPTAPI class
size_t ChatGPTAPI::WriteCallback(void* content, size_t size, size_t nmemb, void* userp) {
    size_t total_size = size * nmemb;
    ((std::string*)userp)->append((char*)content, total_size);
    return total_size;
}

std::string ChatGPTAPI::GetResponse(const std::string& userMessage) {
    CURL* curl = curl_easy_init();
    std::string response;

    if (curl) {
        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");

        std::string auth_header = "Authorization: Bearer " + std::string(getenv("OPENAI_API_KEY") ? getenv("OPENAI_API_KEY") : "");
        headers = curl_slist_append(headers, auth_header.c_str());

        std::string payload = "{\"model\": \"gpt-4.0-mini\", \"messages\": [{\"role\": \"user\", \"content\": \"" + userMessage + "\"}]}";

        curl_easy_setopt(curl, CURLOPT_URL, "https://api.openai.com/v1/chat/completions");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, payload.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        curl_slist_free_all(headers);
        curl_easy_cleanup(curl);
    }

    return response;
}

