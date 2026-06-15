#include <iostream>
#include <string>
#include <algorithm>

std::string toLower(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    std::cout << "AI Chatbot: Hello! I am a simple rule-based AI chatbot. What can I do for you?" << std::endl;
    std::string userInput;

    while (true) {
        std::cout << "User: ";
        std::getline(std::cin, userInput);
        userInput = toLower(userInput);

        if (userInput == "exit" || userInput == "bye") {
            std::cout << "AI Chatbot: Goodbye! Have a nice day!" << std::endl;
            break;
        }

        if (userInput.find("hello") != std::string::npos || userInput.find("hi") != std::string::npos) {
            std::cout << "AI Chatbot: Hello there! Hope you are having a great time learning AI." << std::endl;
        } 
        else if (userInput.find("weather") != std::string::npos) {
            std::cout << "AI Chatbot: I don't have internet access, but it always feels sunny when we are coding!" << std::endl;
        } 
        else if (userInput.find("your name") != std::string::npos) {
            std::cout << "AI Chatbot: My name is Robo-Assistant." << std::endl;
        } 
        else {
            std::cout << "AI Chatbot: I am not sure I understand that yet. Can you ask me something else?" << std::endl;
        }
    }

    return 0;
}
