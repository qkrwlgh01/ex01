#include "print_char_header.h"
#include <cstdio>

void correct_position(char correct_character) {
    printf("\033[32m[ %c ]\033[0m", correct_character);
}

void wrong_position(char wrong_character) {
    printf("\033[33m[ %c ]\033[0m", wrong_character);
}

void wrong_character(char wrong_character) {
    printf("\033[0m[ %c ]\033[0m", wrong_character);
}
