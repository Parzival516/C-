#include<iostream>
using namespace std;
int main()
{
    /*int num{};
    cout<<"Enter a positive integer-start the countdown:";
    cin>>num;

    while(num>0)
    {
        cout<<num<<endl;
        --num;
    }

    cout<<"Enter a posiitive integer to count up to: ";
    cin>>num;

    int i{1};
    while(num>=i)
    {
        cout<<i<<endl;
        ++i;
    }
    cout<<"Blastoff!"<<endl;
*/

/*int number{};
cout<<"Enter an integer less than 100: "<<endl;
cin>>number;

while(number>=100)
{
    cout<<"Enter and integer less than 100:"<<endl;
    cin>>number;
}
cout<<"Thanks"<<endl;
*/
bool done{false};
int number{0};
while(!done)
{
    cout<<"Enter and integer between 1 and 5: ";
    cin>>number;
    if(number<=1||number>=5)
        cout<<"Out of my range"<<endl;
    else
    {
        cout<<"Thanks"<<endl;
        done=true;
    }
}








    cout<<endl;
    return 0;
}
