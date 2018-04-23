#include<stdio.h>

int main(void){
  int i;
  for(i=1; i<50; i++){
    if(i%3==0){
      printf("is a multiple of 3");
    }
    else if(i%3==1){
      printf("with a remainder of 1");
    }
    printf("\n");
  }
  return 0;
}
