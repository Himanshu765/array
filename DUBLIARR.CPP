#include <stdio.h>
#define MAX_SIZE 100
#include <conio.h>
void main()
{
clrscr();
int arr[MAX_SIZE];
int i,j,size,count=0;
printf(" enter any  number");
scanf(" %d",&size);
printf(" enter elements of array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
 for(j=i+1;j<size;j++)
 {
  if(arr[i]==arr[j])
  {
  count++;
  break;
  }
 }
}
printf(" the dublicate of array =%d",count);
getch();
}