#include <cctype>
#include <cstdio>

int main() {
  int c = 0, s = 0, n = 0;
  bool space = false;
  while (true) {
    char ch = fgetc(stdin);
    if (ch == EOF)
      break;
    c++;
    bool inspace = isspace(ch);
    if (space && !inspace)
      s++;
    space = inspace;
    if (ch == '\n')
      n++;
  }
  fprintf(stdout, "%d\t%d\t%d\n", n, s, c);

  return 0;
}
