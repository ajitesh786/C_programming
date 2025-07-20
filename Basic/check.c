#include<stdio.h>
int main() {
    char code = 'K';
    switch('K') {
        case 64 + 1: printf("And");
        break;
        case 8 * 8 + 4: printf("King");

        break;
        default : printf("Noking");

    }
    printf(" Palace");
    return 0;
}