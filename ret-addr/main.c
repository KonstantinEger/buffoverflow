#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void flag(void) {
    printf("Congratulations, you reached the flag!!!\n");
    exit(0);
}

void do_something_with_input(void) {
    char data[] = { 0xde, 0xad, 0xbe, 0xef };
    printf("Please give your input:\n");
    scanf("%[^\n]", data);
}

int main() {
    do_something_with_input();
}