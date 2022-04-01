
#include <stdio.h>
#include <time.h>

int main() {
  printf("开始\n");
  long op = time(NULL);
  int num = 0;
  for (int n1 = 0; n1 < 1000; ++n1) {
    for (int n2 = 0; n2 < 1000; ++n2) {
      for (int n3 = 0; n3 < 1000; ++n3) {
        num += n3 - n2;
      }
    }
  }
  printf("结束 %ld %d\n", time(NULL) - op, num);
  return 0;
}
