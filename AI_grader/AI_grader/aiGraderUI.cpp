#include "aiGraderUI.h"
#include "curl.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(/*array<String^>^ args*/)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    AIGrader::aiGraderUI form;

    // Example usage of the ChatGPTAPI to get a response
    std::string userMessage = "Hello, how are you?";  // Replace this with actual user input
    std::string response = ChatGPTAPI::GetResponse(userMessage);

    // Display the response in the console or send it to your UI
    std::cout << "API Response: " << response << std::endl;

    Application::Run(% form);

    return 0;
}
