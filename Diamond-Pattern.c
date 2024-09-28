// Diamond-Pattern


#include <stdio.h>

int main(void) {
  int a,b,c;
  for(a=1;a<=5;a++){
    for(b=5;b>=a;b--){
      printf(" ");
    }
    for(c=1;c<=2*a-1;c++){
      printf("*");
    }
    printf("\n");
  }
  for(a=2;a<=5;a++){
    for(b=1;b<=a;b++){
      printf(" ");
    }
    for(c=1;c<=2*(5-a)+1;c++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
