#ifndef CURL_H
#define CURL_H

#include <string>
#include <curl/curl.h>  




struct Message 
{
    std::string text;
    bool isAssistant;
};

struct Conversation 
{
    std::vector<Message> messages;
};

size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) 
{
    size_t totalSize = size * nmemb;
    ((std::string*)userp)->append((char*)contents, totalSize);
    return totalSize;
}



namespace ChatGPTAPI 
{
    std::string GetResponse(const std::string& input);

    inline std::string GetResponse(const std::string& input) 
    {
        CURL* curl;
        CURLcode res;
        std::string response;

        std::string apiKey = "PASTE YOUR KEY HERE";

        // init curl
        curl_global_init(CURL_GLOBAL_DEFAULT);
        curl = curl_easy_init();

        if (curl) 
        {
      
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.openai.com/v1/chat/completions");

            curl_easy_setopt(curl, CURLOPT_POST, 1L);

            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "Content-Type: application/json");
            headers = curl_slist_append(headers, ("Authorization: Bearer " + apiKey).c_str());
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            std::string postData = "{\"model\": \"gpt-3.5-turbo\", \"messages\": [{\"role\": \"user\", \"content\": \"" + input + "\"}]}";
            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postData.c_str());

            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

            res = curl_easy_perform(curl);

            if (res != CURLE_OK) 
            {
                response = "cURL request failed: " + std::string(curl_easy_strerror(res));
            }

            curl_easy_cleanup(curl);
            curl_slist_free_all(headers);
        }

        curl_global_cleanup();

        return response;
    }
}


#endif 
