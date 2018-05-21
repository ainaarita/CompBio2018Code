#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int r,M,N,x,i,j,k;
  double sum;
  srand(time(NULL));
  M=1;
  N=6;
  x=0;
  sum=0.0;

for(j=0;j<1000;j++){

  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
      //printf("%d\n",i);
      break;
    }
  }
  x=0;
sum=sum+i;
}

printf("answer=%f\n",sum/1000.0);

  return 0;
}
