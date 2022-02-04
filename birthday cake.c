#include<stdio.h>
int main()
{
int i,j,n,k,l;
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
scanf("%d%d",&i,&j);
if(i<j)
printf("%d",j);
else
break;
}
for(k=1;k<=n;k++){
for(l=1;l<=n;l++){
scanf("%d%d",&k,&l);
if(k<l)
printf("%d",l);
else
break;
}
}

