#include<iostream>
using namespace std;


int stack[100],size=100,top=-1;
void push(int val)
{
if(top>=size-1)
cout<<"Overflow: Stack is full \n";
else
{
    top++;
    stack[top]=val;
}

}
void pop()
{
    if(top<=-1)
    {
        cout<<"Stack Underflow \n";
    }
    else
    {
        cout<<"The popped element ="<<stack[top];
        top--;
    }


}

void show()
{
if(top>=0)
 {
 cout<<"Stack Elements are\n";
 for(int i=0;i<=top;i++)
   cout<<stack[i]<<"  ";
 }
 else
 {
    cout<<"Stack is Empty";
 }



}

int main()
{
int ch,val;

do
{

cout<<"\nMenu";
cout<<"\n1. PUSH Element";
cout<<"\n2. POP ";
cout<<"\n3. SHOW Stack";
cout<<"\n4.Exit";
cout<<"\nEnter your choice 1 to 4=";
cin>>ch;
switch (ch)
{
case 1:
    cout<<"Enter value to be Pushed=";
    cin>>val;
    push(val);
    break;
case 2:
    pop();
    break;

case 3:
    show();
    break;
case 4:
    exit(0);
    break;

default:
    cout<<"Invalid choice !";
    break;
}

}while (ch<=3);


return -1;
}
