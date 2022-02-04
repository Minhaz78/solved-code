#include<stdio.h>
double pi=3.14;
void my_fnc()
{
pi=3.1416;
return 0;
}
int main()
{
printf("%1f\n",pi);
my_fnc();
printf("%1f\n",pi);
return 0;




}
