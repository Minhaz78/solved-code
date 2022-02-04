#include <iostream>
using namespace std;

int main() {
	string a;
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(a.length()>10)
		{
			cout<<a[0]<<a.length()-2<<a[a.length()-1];/*way too long word*/
		}
		else
		cout<<a;
	}
	return 0;
}
