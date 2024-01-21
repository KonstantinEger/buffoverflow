#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void print_buff(uint8_t * buffer, size_t n) {
    for (size_t i = 0; i < n; i++) {
        printf("%02X ", buffer[i]);
        if ((i+1) % 8 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

void flag() {
    printf("Congratulations, you reached the flag!!!\n");
    exit(0);
}

uint8_t add(uint8_t a, uint8_t b) {
    char data[] = { 0xde, 0xad, 0xbe, 0xef };
    scanf("%[^\n]", data);
    return a + b;
}

int main() {
    add(5, 4);
    printf("H\n");
}