#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../include/uplow.h"

char ULetters[50] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char LLetters[50] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char to_lower(char c) {
    char c2;
    for(int i = 0;i < 30;i++) {
        if(c ==ULetters[i]) {
            c = LLetters[i];
            c2 = c;
            break;
        }
    }
    return c2;
}

char to_upper(char c){
    char c2;
    for(int i = 0;i < 30;i++) {
        if(c ==LLetters[i]) {
            c = ULetters[i];
            c2 = c;
            break;
        }
    }
    return c2;
}

bool is_lower(char c) {
    for(int i = 0;i < 30;i++) {
        if(LLetters[i] == c) {
            return true;
            break;
        }
    }
}
bool is_upper(char c) {
    for(int i = 0;i < 30;i++) {
        if(c == ULetters[i]) {
            return true;
            break;
        }
    }
}
