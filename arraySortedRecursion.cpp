#include<bits/stdc++.h>
using namespace std;

bool sort(int arr[],int n)
{

    if(n==1)
    {
        return true;

    }
    bool restArray=sort(arr+1,n-1);
    return(arr[0]<arr[1]&&restArray);
    

}

int main()
{
    int arr[]={1,6,3,4,5};
    cout<<sort(arr,5)<<endl;
    return 0;
}