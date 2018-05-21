#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 50

int main(void){
  int a[N],aa[N],i,t,r1,r2,r,aaa;
  srand(time(NULL));

//p=0.1
  for(i=0;i<(N/5);i++);{
    a[i]=0;
    a[i+4*N/5]=1;
  }

  for(t=0;t<100;t++){
    aaa=0;
    for(i=0;i<N;i++){
      r1=rand()%N;
      r2=rand()%N;
      r=rand()%2;
      if(r==0){
        aa[i]=a[r1];
      }
      if(r==1){
        aa[i]=a[r2];
      }
      aaa=aaa+aa[i];

      if(aaa=50){
        printf("%d\n",t);
        break;
      }
    }

    for(i=0;i<N;i++){
      a[i]=aa[i];
      //printf("%d",a[i]);
    }
  }

  return 0;
}
