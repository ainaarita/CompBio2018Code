#include<stdio.h>

int main(void){
  int i;
  double x0,x1,x2,xx0,xx1,xx2,b,c;
  double dt;

  x0=99.0;
  x1=1.0;
  x2=0.0;
  dt=0.01;
  b=0.5;
  c=0.5;

  FILE *fp;
  fp=fopen("6-4.dat","w");
  fprintf(fp,"%f,%f,%f,%f\n",0.0,x0,x1,x2);
  for(i=1;i<1000;i++){

    xx0=x0+dt*(-b*x0*x1);
    xx1=x1+dt*(b*x0*x1-c*x1);
    xx2=x2+dt*(c*x1);

    x0=xx0;
    x1=xx1;
    x2=xx2;

    fprintf(fp,"%f,%f,%f,%f\n",dt*i,x0,x1,x2);
  }
  fclose(fp);
  return 0;
}
