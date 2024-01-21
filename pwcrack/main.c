#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#define PW_LEN 11
#define PRINT_PW false

void failed_login(void) {
    printf("Sorry, wrong password :(\n");
}

void successful_login(void) {
    printf("Yay! successful login!\n");
}

void generate_password(size_t pw_len, char * buffer) {
    for (size_t i = 0; i < pw_len; i++) {
        int rand_num = rand() % 95;
        int rand_ascii = rand_num + 32;
        buffer[i] = (char)rand_ascii;
    }

    if (PRINT_PW) {
        printf("dbg: generated password: '%s'\n", buffer);
    }
}

int main() {
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
