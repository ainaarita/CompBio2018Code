#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
  int i;
  double x0,x1,x2,xx0,xx1,xx2,b,c,y,y1,y2,N;
  double dt;
  srand(time(NULL));
  N=1;

  x0=98.0;
  x1=2.0;
  x2=0.0;
  dt=0.01;
  b=0.1;
  c=0.5;


  FILE *fp;
  fp=fopen("6-5-hard3-variance9.dat","w");
  fprintf(fp,"%f,%f,%f,%f\n",0.0,x0,x1,x2);

  for(i=1;i<10000;i++){

    xx0=x0+dt*(-b*x0*x1);
    xx1=x1+dt*(b*x0*x1-c*x1);
    xx2=x2+dt*(c*x1);

    x0=xx0;
    x1=xx1;
    x2=xx2;


    y1=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    y2=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    y=sqrt(-2*log(y1))*cos(2*M_PI*y2);

    fprintf(fp,"%f,%f,%f,%f\n",dt*i,x0,x1+y,x2);

  }
  fclose(fp);
  return 0;
}
