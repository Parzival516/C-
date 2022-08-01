#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
cin.ignore();

char arr[n+1];

cin.getline(arr, n);
cin.ignore();

int i=0;
int curr=0;
int max=0;
while(1)
{
    if(arr[i]==' '||arr[i]=='\0')
    {
        if(curr==max)
        {
            max=curr;
        }
        curr=0;
    }
    else
    curr++;
    if(arr[i]=='\0')
    break;
    i++;
}
cout<<max<<endl;

    return 0;
}