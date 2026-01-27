#include <stdio.h>

int main() {
    int n = 4;

    // Upper inverted pyramid
    for(int i = n; i >= 1; i--) {
        for(int space = 0; space < n - i; space++) {
            printf(" ");
        }
        for(int star = 1; star <= 2*i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower pyramid
    for(int i = 2; i <= n; i++) {
        for(int space = 0; space < n - i; space++) {
            printf(" ");
        }
        for(int star = 1; star <= 2*i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}