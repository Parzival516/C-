#include <iostream>
#include <array>
using namespace std;

int linearSearch(int arr[],int size, int searchValue)
{
    for (int i = 0; i < size; i++)
    {
        if (searchValue ==arr[i])
        {
            return i;
        }
    }
    return -1;
    

}




int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int in;
    cin>>in;
    int result=linearSearch(arr,6,in);

    if (result>=0)
    {
        cout<<"The number "<<arr[result]<<" was found at the eleemnt with index "<<result<<endl;
        
    }
    else
    {
        cout<<"the number "<<in<<" was not found"<<endl;
    }
    
    
    return 0;
}