#include <stdio.h>

// Given character input, verify if a given character is EOF.
// (note that EOF is actually an int.)

main() {
  int c;

  while (c = getchar()) {
    printf("%d: %d\n", c, c != EOF);
    if (c == EOF)
      break;
  }
}

