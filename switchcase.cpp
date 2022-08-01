#include<bits/stdc++.h>
using namespace std;
int main()
{
    char button;
    cout<<"Input a Character:";
    cin>>button;
    
    switch (button)
    {
    case 'a':
        cout<<"a";
        break;
        case 'b':
        cout<<"b";
        break;
        case 'c':
        cout<<"c";
        break;
        case 'd':
        cout<<"d";
        break;
    
    default:
    cout<<"Not found!"<<endl;
        break;
    }
    return 0;
}