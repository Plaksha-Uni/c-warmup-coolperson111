
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  /* First Approach
  while (argc > 1) {
    int smallest = 1;
    for (int j = 2; j < argc; j++) {
      if (strcmp(argv[j], argv[smallest]) <= 0) {
        smallest = j;
      }
    }
    fprintf(stdout, "%s\n", argv[smallest]);

    argv[smallest] = argv[--argc];
  }
  */

  /* Second Approach
  */
  vector<string> args;
  for (int i=1; i<argc; i++) {
    args.push_back(argv[i]);
  }
  sort(args.begin(), args.end());

  for (auto i : args) {
    cout << i << endl;
  }


  return 0;
}
