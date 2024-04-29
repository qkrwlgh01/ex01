#include <string>
#include <cctype>

std::string to_lower_case(std::string word) {
    for (char& c : word) {
        c = std::tolower(c);
    }
    return word;
}
