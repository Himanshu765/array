#include <stdio.h>
#include <conio.h>
void main ()
{
int a[5],i,max;
clrscr();
printf("enter any number");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
printf("\n a[%d]=%d",i,a[i]);
max=a[0];
if(max<a[i])  // largets  number of array
max=a[i];
}
printf(" \n largest number=%d",max);
getch();
}


