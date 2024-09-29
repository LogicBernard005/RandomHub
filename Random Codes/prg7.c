#include<stdio.h>
#include <conio.h>
void main()
{
int a[5]={50,222,61,78,9};
int *p=&a[0];
int i;
for(i=0;i<5;i++)
printf("%d ",*(p+i));
getch();
}