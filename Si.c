#include<stdio.h>
main()
{
  float p,r,t,simpleInterest;
  printf("Enter Pricipal\n");
  scanf("%f",&p);
  printf("Enter Rate in percentage \n");
  scanf("%f",&r);
  printf("Enter Time in years(decimals)\n");
  scanf("%f",&t);
  simpleInterest=(float)(p*r*t)/100.0;
  printf("Simple Interest is %f\n",simpleInterest);
}
