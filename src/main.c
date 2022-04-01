
#include <stdio.h>

int main() {
  printf("开始\n");
  int num = 0;
  for (int n1 = 0; n1 < 1000; ++n1) {
    for (int n2 = 0; n2 < 1000; ++n2) {
      for (int n3 = 0; n3 < 1000; ++n3) {
        num += 1;
      }
    }
  }
  printf("结束 %d\n", num);
  return 0;
}
