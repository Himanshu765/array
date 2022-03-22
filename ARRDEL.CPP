#include <stdio.h>
#include <conio.h>
void main ()
{
int i,n,posi,a[10];
clrscr();
printf("enter any size of array:-");
scanf (" %d",&n);
for(i=0;i<n;i++)
{
scanf(" %d",&a[i]);
}
printf("arrray is\n");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
printf("\t enter position  for deletion:-");
scanf(" %d",&posi);
for(i=posi-1;i<n;i++)
{
a[i]=a[i+1];
}
printf("array after deletion:-\n");
for(i=0;i<n-1;i++)
{
printf("\n %d",a[i]);
}
getch();
}