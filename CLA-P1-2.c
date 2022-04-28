#include <stdio.h>
int main(){
int billwt;
float tax,tip,totaltax,totaltip,totalbill;
scanf("%d",&billwt);
tax=0.18;
tip=0.05 ;
totaltax=tax*billwt;
totaltip=tip*billwt;
totalbill=billwt+totaltax+totaltip;
printf("The Tax is %.2f",totaltax);
printf("\nThe Tip is %.2f",totaltip);
printf("\nTotal Bill With Tax and Tip is %.2f",totalbill);
return 0;}