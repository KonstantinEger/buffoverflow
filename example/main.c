#include <stdlib.h>
#include <stdio.h>

int main() {
    const char some_string[] = "Hello World";
    char buffer[10] = {0};

    printf("Type something:\n");
    scanf("%[^\n]", buffer);

    printf("\n***\n\n");
    printf("some_string: %s\nyour input: %s\n", some_string, buffer);
}