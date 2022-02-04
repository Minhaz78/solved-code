

#include<stdio.h>


int addfunction(int firstnum,int secondnum);

{
int result;
result=firstnum+secondnum;
return result;


}

int main()
int a,b;
a=10;
b=12;
int resultnum=addfunction(a,b);
printf("%d+%d=%d\n",a,b,resultnum);

}




