/*question number 2*/

#include<stdio.h>
void main()
   {
      int x,y;
for(y=0;y<10;y++)
{
for(x=0;x<20;x++)
if((x<8&&y<3)||(x>14&&y>6))
printf("0");
else
printf("*");
printf("\n");
}   

}
