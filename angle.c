#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
 int main(int argc, char const *argv[])
 {
     int angle;
     float x,y;
     angle = 0;
     printf("          Angle         cos(angle)\n\n");
     while(angle <= MAX)
     {
         x=(PI/MAX)*angle;
         y= cos(x);
         printf("%15d %13.4f\n",angle,y);
         angle = angle +10;
     }
     return 0;
 }
 