#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd = DETECT ,gm;
int x=300;
	int y=200;
	int radius =100;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	circle(x,y,radius);
getch();
}
