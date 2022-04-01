
#include <stdio.h>

int main() {
  int num = 0;
  for (int n1 = 0; n1 < 1000; ++n1) {
    for (int n1 = 0; n1 < 1000; ++n1) {
      for (int n1 = 0; n1 < 1000; ++n1) {
        ++num;
      }
    }
  }
  printf("你好，世界 %d\n", num);
  return 0;
}
