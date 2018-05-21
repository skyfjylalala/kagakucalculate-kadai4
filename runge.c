#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  double x;
  double y1=1;
  double y2;
  double h= 0.1;
  //FILE *fp;
  double k1,k2,k3,k4;

  //fp = fopen("rungedat.dat","w");

  for(x = 0;x<=1;x+=h){
    y2=(1.0+0.0+1.0) * exp(x) - 1.0 - x;
    printf("%f %f\n",x,y2);
    printf("%f %f\n",x,y1);

    k1 = x + y1;
    k2 = x + h/2.0 + y1 + h/2.0*k1;
    k3 = x + h/2.0 + y1 + h/2.0*k2;
    k4 = x + h + y1 + h*k3;

    y1 = y1 + h/6.0 * (k1 + 2.0*k2 + 2.0*k3 + k4);



  }

  //fclose(fp);

  return 0;
}
