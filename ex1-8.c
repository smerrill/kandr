#include <stdio.h>

main() {
  int c, spaces, tabs, newlines;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\t':
        ++tabs;
        break;
      case ' ':
        ++spaces;
        break;
      case '\n':
        ++newlines;
        break;
    }
  }

  printf("The input contained %d tabs, %d spaces, and %d newlines.\n",
    tabs, spaces, newlines);
}
