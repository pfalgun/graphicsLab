
//THICK LINE DRAWING
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd = DETECT, gm  ;
float wy, wx, x1, y1, x2, y2;
int i, thickness;
initgraph(&gd, &gm, "C:\\TC\\BGI");
printf("Enter the co-ordinates for the line:\n");
printf("X1: ");

scanf("%f", &x1);
printf("Y1: ");
scanf("%f", &y1);
printf("X2: ");
scanf("%f", &x2);
printf("Y2: ");
scanf("%f", &y2);
printf("Enter the required thickness: ");
scanf("%d", &thickness);
cleardevice();
line (x1, y1, x2, y2);
if ((y2 - y1) / (x2 - x1) < 1)
{
 wy = (thickness-1)*sqrt(pow((x2-x1),2)+pow((y2-y1),2))/(2*fabs(x2-x1));
 for(i = 0;i < wy; i++)
 {
 line(x1, y1 - i, x2, y2 - i);
 line(x1, y1 + i, x2, y2 + i);
 }
}
else
{
 wx = (thickness-1)*sqrt(pow((x2-x1),2)+pow((y2-y1),2))/(2*fabs(y2-y1));
 for(i = 0; i < wx; i++)
 {
 line(x1 - i, y1, x2 - i, y2);
 line(x1 + i, y1, x2 + i, y2);
 }
}
printf("This is the line of thickness %d units.\n", thickness);
getch();
}
