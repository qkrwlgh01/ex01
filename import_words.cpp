#include "import_words_header.h"
#include <fstream>

std::vector<std::string> import_words() {
    std::vector<std::string> words;
    std::ifstream file("words.txt");
    std::string word;

    while (file >> word) {
        words.push_back(word);
    }

    file.close();
    return words;
}
