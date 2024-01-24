#include <stdlib.h>
#include <stdio.h>

int main() {
    const char some_string[] = "Hello World";
    char your_input[10] = {0};

    printf("Type something:\n");
    // Input lesen & in your_input schreiben, bis [ENTER] gedrückt wird
    scanf("%[^\n]", your_input);

    printf("\n=========\n");
    printf("some_string: %s\n", some_string);
    printf("your_input:  %s\n", your_input);
    printf("==========\n");
}