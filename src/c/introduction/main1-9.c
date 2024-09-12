#include <stdio.h>

#define MAX 1000

int getstring(char line[], int lim);
void copy(char longest[], char line[]);

int main() {
  int c, len, max = 0;
  char line[MAX], longest[MAX];

  while ((len = getstring(line, MAX)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("%s", longest);
  }
  return 0;
}

int getstring(char line[], int lim) {
  int i, c;
  for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void copy(char longest[], char line[]) {
  char c;
  int i = 0;
  while ((longest[i] = line[i]) != '\0') {
    i++;
  }
}
