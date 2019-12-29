#include <stdio.h>
/*this program will count blanks, tabs, and newlines */

int main() {
  int c, blank, tab, newline;

  blank = tab = newline = 0;

  while((c = getchar()) != EOF) {
    if(c == ' ') {
      blank++;
    }
    if(c == '\t') {
      tab++;
    }
    if(c == '\n') {
      newline++;
    }
  }
  printf("Blanks: %d \nTabs: %d \nNewlines: %d\n", blank, tab, newline);
  return 0;
}