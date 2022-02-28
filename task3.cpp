#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;



int logic(string a)
{
   /* for(int i=1;i<a.length();i++)   //this code is also valid but not working for some unknown reason
    {
        if(a.at(i)!=' ')             //here im iterating each string element upto the point where it finds a "space" and itll say invalid bridge
        {
            cout<<"Bridge is invalid"<<endl;
        }
        else
            cout<<"Bridge is good to go"<<endl;
    }
*/
if(a.find(' ')!=string::npos)//here the if statement will fire up if it finds space in the string value and for that we have to use a.find()
    cout<<"bad bridge"<<endl;//as "space" is neither an alphabet or digit nor a special character so if we use a.at()itll stop taking values after the "space"
else                         //and every time itll say bridge is good
    cout<<"good bridge"<<endl;
    return 0;
}






void bridge()
{
    string a{};
    cout<<"\nEnter the bridge design you want to make with # characters only";
    getline(cin,a);//here we must use getline() otherwise itll stop taking input after user inputs space, in this case it is taking all characters including space
    cout<<"The bridge that you want to make is "<<logic(a)<<endl;
}






int main()
{
    bridge();
    return 0;
}
