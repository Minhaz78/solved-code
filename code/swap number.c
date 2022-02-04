#include <stdio.h>

int main()
{
int a, b, temp;

printf("Enter the value of a and b\n");
scanf("%d%d", &a, &b);

printf("Before Swapping\na = %d\nb = %d\n",a,b);

temp = a;
a = b;
b = temp;

printf("After Swapping\na = %d\nb = %d\n",a,b);

return 0;
}
