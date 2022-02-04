#include<iostream>
using namespace std;
int main()
{

int n,i;
for(i=0;i<=255;i++)
{
cin>>n;
if(0<=n&&n<=99){
cout<<"black";
}
else if(100<=n&&n<=199)
{
cout<<"gray";
}
else
{
cout<<"white";
}


}

}
