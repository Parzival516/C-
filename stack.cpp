#include <iostream>
#include<stack>
using namespace std;


void printstackelement(stack<int> stack)
{
while (!stack.empty())
{
    cout<<stack.top()<<endl;
    stack.pop();
}

}


int main()
{

stack<int>numbersStack;
// numbersStack.push(1);
// numbersStack.push(2);
// numbersStack.push(3);
// numbersStack.push(4);
// numbersStack.pop();
// if(numbersStack.empty())
// cout<<"stack is empty";
// else
// cout<<"stack is not empty";

// cout<<"Stack size is "<<numbersStack.size()<<endl;

// printstackelement(numbersStack);

cout<<"Enter stack elements"<<endl;
int a,b,c,d;
cin>>a>>b>>c>>d;
numbersStack.push(a);
numbersStack.push(b);
numbersStack.push(c);
numbersStack.push(d);

cout<<"Your stack elements are: "<<endl;
printstackelement(numbersStack);



    return 0;
}