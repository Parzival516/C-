#include<bits/stdc++.h>
using namespace std;
int main()
{
    int money;
    cin>>money;

    if (money>5000)
    {
        cout<<"More than 5k";
    }
    else if(money>4000&&money<5000)
    {
        cout<<"More than 4k";
    }
    else
    {
        cout<<"Less than 4k";
    }
    
    return 0;
}
