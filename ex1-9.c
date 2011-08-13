#include <stdio.h>

main() {
  int cur, last;

  // Initialize yo stuff!
  last = EOF;

  while ((cur = getchar()) != EOF) {
    if (!(cur == ' ' && last == cur)) {
      putchar(cur);
    }
    last = cur;
  }
}
