#include <stdio.h>
#include <conio.h>
void main ()
{
clrscr();
int arr[100],i,j,size;
printf("enter any size of array");
scanf(" %d",&size);
printf(" enter array elements");
for(i=0;i<size;i++)
{
scanf(" %d",&arr[i]);
}
printf("Duplicate elements :");
for(i=0;i<size;i++)
{
	for(j=i+1;j<size;j++)
	{
		if(arr[i]==arr[j])
		{
		 printf("%d",arr[j]);
		}
		printf("\n");
	}
}
getch();
}