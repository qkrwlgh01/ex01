#include "import_words_header.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>

std::vector<std::string> select_words(const std::vector<std::string>& words, int word_length, int num_words) {
    std::vector<std::string> selected_words;
    srand(time(NULL));

    while (selected_words.size() < num_words) {
        std::string candidate = words[rand() % words.size()];
        if (candidate.length() == word_length && std::find(selected_words.begin(), selected_words.end(), candidate) == selected_words.end()) {
            selected_words.push_back(candidate);
        }
    }

    return selected_words;
}
