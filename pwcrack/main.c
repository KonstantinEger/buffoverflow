#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#define PW_LEN 10

void failed_login(void) {
    printf("Sorry, falsches Password :(\n");
}

void successful_login(void) {
    printf("Yay! Erfolgreich eingeloggt! Bedingung Nr. 2 erfüllt!\n");
}

void generate_password(size_t pw_len, char * buffer) {
    for (size_t i = 0; i < pw_len; i++) {
        int rand_num = rand() % 95;
        int rand_ascii = rand_num + 32;
        buffer[i] = (char)rand_ascii;
    }
}

void must_not_crash(void) {
    char password[PW_LEN+1] = {0};
    char user_input[PW_LEN+1] = {0};

    srand(time(NULL));
    generate_password(PW_LEN, password);

    printf("Please input password:\n");
    scanf("%[^\n]", user_input);

    if (strncmp(password, user_input, PW_LEN) == 0) {
        successful_login();
    } else {
        failed_login();
    }
}

int main() {
    must_not_crash();
    printf("Nicht gecrasht! Bedingung Nr. 1 erfüllt!\n");
}
