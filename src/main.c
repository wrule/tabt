
#include <stdio.h>
#include <time.h>
#include "ohlcv.h"

typedef struct {
  double open;
  double high;
  double low;
  double close;
  double volume;
} ohlcv;

int main() {
  ohlcv a = {
    open: 0.0,
    high: 0.0,
    low: 0.0,
    close: 0.0,
    volume: 0.0,
  };
  ohlcv history[21000];
  double sum = 0;
  for (int n2 = 0; n2 < 100; ++n2) {
    for (int n1 = 0; n1 < 1000; ++n1) {
      for (int i = 0; i < 21000; ++i) {
        sum += (history[i].open + history[i].low);
      }
    }
  }
  printf("%lf\n", sum);
  // printf("开始\n");
  // long op = time(NULL);
  // int num = 0;
  // for (int n1 = 0; n1 < 10000; ++n1) {
  //   for (int n2 = 0; n2 < 1000; ++n2) {
  //     for (int n3 = 0; n3 < 1000; ++n3) {
  //       num += num + (n1 + n2 - n3);
  //     }
  //   }
  // }
  // printf("结束 %ld %d\n", time(NULL) - op, num);
  return 0;
}
