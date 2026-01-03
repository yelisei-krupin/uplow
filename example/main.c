#include <stdio.h>
#include "../include/uplow.h"
int main() {
    printf("Is Upper: %d\n", is_upper('F')); // 1 - true
    printf("Is Lower: %d\n", is_lower('u')); // 1 - true
    printf("To Upper: %c\n", to_upper('c')); // return - C
    printf("To Lower: %c\n", to_lower('K')); // return - k
}
