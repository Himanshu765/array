#include <iostream.h>
#include <conio.h>
void sum(int arr1[],int arr2[])
{
 int temp[5],i;
 for(i=0;i<5;i++)
 {
  temp[i]=arr1[i]+arr2[i];
  cout<< " \n "<<temp[i];
 }
}
int main()
{
 clrscr();
 int a[5]={10,11,12,13,14};
 int b[5]={1,2,3,4,5};
 sum (a,b);
 getch();
 return 0;
}