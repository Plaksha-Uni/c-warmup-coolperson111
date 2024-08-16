#include <cassert>
#include <cstdio>
#include <cstring>

char *mystrstr(const char *s1, const char *s2) {
  for (int i = 0; s1[i] != 0; i++) {
    int j = 0;
    while (s2[j] && s2[j] == s1[i + j])
      j++;
    if (!s2[j])
      return (char *)&s1[i];
  }

  if (!s2[0])
    return (char *)s1;

  return nullptr;
}

char *mystrstr1(const char *s1, const char *s2) {
  fprintf(stdout, "malhar was here\n");

  if (!(*s2))
    return (char *)s1;

  for (; *s1; s1++) {
    const char *p1 = s1;
    const char *p2 = s2;

    while (*p2 && *p2 == *p1) {
      p1++;
      p2++;
    }
    if (!(*p2))
      return (char *)s1;
  }

  return nullptr;
}

int main(int argc, char *argv[]) {
  assert(argc == 3);
  printf("strstr(\"%s\", \"%s\") = %p\n", argv[1], argv[2],
         strstr(argv[1], argv[2]));
  printf("mystrstr(\"%s\", \"%s\") = %p\n", argv[1], argv[2],
         mystrstr1(argv[1], argv[2]));
  assert(strstr(argv[1], argv[2]) == mystrstr(argv[1], argv[2]));
}
