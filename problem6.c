#include <stdio.h>
#include <math.h>

int main(){
  int sumsquare = 0;
  int squaresum = 0;
  int i;
  for (i = 1; i <= 100; i++){
    squaresum += i;
    sumsquare += (int)pow(i, 2);
  }
  squaresum = (int)pow(squaresum, 2);
  int ans = squaresum - sumsquare;
  printf("The difference is %d", ans);
}
