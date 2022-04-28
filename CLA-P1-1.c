#include <stdio.h>
int main()
{
int GrossPayment,basic,da,hra;
scanf("%d %d %d",&basic,&da,&hra);
GrossPayment=(basic*(da+hra)/100)+basic;
double s=GrossPayment-0.5;
printf("%.lf",s);
return 0;
}