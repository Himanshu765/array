#include <stdio.h>
#include <conio.h>
void main ()
{
int a[5],i,multi=1;
clrscr();
printf("enter any number");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
printf("\n a[%d]=%d",i,a[i]);
multi=multi*a[i];
}
printf("\n  product of array elements =%d",multi);
getch();

}


