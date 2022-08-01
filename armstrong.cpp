#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;

int sum=0;
int original=n;
while(n>0)
{
    int last=n%10;
    sum+=pow(last,3);
    n=n/10;
}
if(sum==original)
{
    cout<<"Armstrong"<<endl;
}
else{cout<<"not armstrong";}


    return 0;
}