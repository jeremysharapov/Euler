#include <stdio.h>

int Dividable(int n){
  int i;
  for (i = 1; i <= 20; i++){
    if (n % i != 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int ans = 1;
  while (Dividable(ans) == 0){
    ans++;
  }
  printf("The smallest multiple is %d", ans);
}
