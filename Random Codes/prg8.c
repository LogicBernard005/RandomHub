#include <stdio.h>
 
int main()
{
   int x, y, *a, *b, temp;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
 
   printf(" Before Swapping\n x = %d\n y = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf(" After Swapping\n x = %d\n y = %d\n", x, y);
 
   return 0;
}