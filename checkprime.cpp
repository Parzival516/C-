#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for( i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"It's a non prime number"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"It's a prime number"<<endl;
    }
    //cout<<"Prime"<<endl;
    return 0;
}