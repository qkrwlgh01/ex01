#include <iostream>  
#include <string>

void diff(const std::string& guess, const std::string& wordle) {
    for (size_t i = 0; i < guess.size(); i++) {
        if (guess[i] == wordle[i]) {
            std::cout << guess[i];  
        } else {
            bool found = false;
            for (size_t j = 0; j < wordle.size(); j++) {
                if (guess[i] == wordle[j]) {
                    std::cout << '+';  
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << '_'; 
            }
        }
    }
    std::cout << std::endl;
}
