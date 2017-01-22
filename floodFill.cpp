#include<graphics.h>
#include<dos.h>
#include<iostream>
using namespace std;

void floodFill(int x, int y, int old, int fill){
	int current;
	current = getPixel(x,y);
	if(current == old){
		putPixel(x,y,fill);
		delay(1);
		floodFill(x+1, y, old, fill);
		floodFill(x-1, y, old, fill);
		floodFill(x, y+1, old, fill);
		floodFill(x, y-1, old, fill);
	}
}

void main(){
	int o = 0;
	clrscr();
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	rectangle(100, 100, 150, 150);
	rectangle(200, 200, 250, 250);
	rectangle(300, 100, 350, 150);
	rectangle(400, 200, 450, 250);
	floodFill(125, 125, 0, 4);
	floodFill(225, 225, 0, 5);
	floodFill(325, 125, 0, 6);
	floodFill(425, 225, 0, 7);
	getch();
	closegraph();
}
