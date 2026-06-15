#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

bool isStopWord(const std::string& word) {
    const std::vector<std::string> stopWords = {"is", "a", "the", "an", "on", "in", "to", "and"};
    return std::find(stopWords.begin(), stopWords.end(), word) != stopWords.end();
}

int main() {
    std::string text = "Artificial Intelligence is the future of computing and robotics";
    std::cout << "Original Text: " << text << std::endl;

    std::stringstream ss(text);
    std::string word;
    std::vector<std::string> tokens;

    while (ss >> word) {
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        tokens.push_back(word);
    }

    std::cout << "\nTokens after Tokenization & Stop-word Filtering:" << std::endl;
    for (const std::string& t : tokens) {
        if (!isStopWord(t)) {
            std::cout << "[" << t << "] ";
        }
    }
    std::cout << std::endl;

    return 0;
}
