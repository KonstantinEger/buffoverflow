#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(int key) {
  char overflowme[32];
  printf("overflow me : ");
  gets(overflowme); // smash me!
  if (key == 0x41414141) {
    printf("Yay..\n");
  } else {
    printf("Nay..\n");
  }
}
int main(int argc, char *argv[]) {
  func(0xdeadbeef);
  return 0;
}
