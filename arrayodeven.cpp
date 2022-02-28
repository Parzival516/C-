#include<iostream>
using namespace std;
int main()
{
 int arr[100],n;
 cout<<"Enter size of array: "<<endl;
 cin>>n;
 cout<<"Enter elements of the array: "<<endl;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }

 cout<<"Even elements: "<<endl;
 for(int i=0;i<n;i++)
 {
     if(arr[i]%2==0)
     {
         cout<<arr[i]<<endl;
     }
 }

  cout<<"Odd elements: "<<endl;
 for(int i=0;i<n;i++)
 {
     if(arr[i]%2==1)
     {
         cout<<arr[i]<<endl;
     }
 }

    return 0;
}
