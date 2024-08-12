#include <cstdio>

int main() {
  int n = 0;
  while (fgetc(stdin) != EOF)
    n++;
  fprintf(stdout, "%d\n", n);

  return 0;
}
