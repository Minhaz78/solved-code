#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a;
    for (int i = 0; i <= k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout<<"positive";
            cout <<  i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != a)
        {
            cout<<"non positive";
            cout <<  i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}
