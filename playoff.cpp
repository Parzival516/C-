#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (--t)
    {int a,b;
    cin>>a>>b;
        if (t<1||t>30)
        {
            return -1;
        }
        else if ((a+b)%2==0) 
        {
            if (a>b)
            {
                cout<<a;
            }
            else
            {
                cout<<b;
            }
            
            


        }

         else if ((a+b)%2!=0) 
        {
            if (a<b)
            {
                cout<<a;
            }
            else
            {
                cout<<b;
            }
            
            


        }
        
    }
    
    return 0;
}