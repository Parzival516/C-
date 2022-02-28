#include<iostream>
#include<queue>
using namespace std;

void printqueue(queue <int> queue)
{
    while (!queue.empty())
    {
        cout<<queue.front()<<" ";
        queue.pop();    
    }
    cout<<endl;
}

int main()
{
queue<int> myqueue;
myqueue.push(1);
myqueue.push(2);
myqueue.push(3);

cout<<"Size is "<<myqueue.size()<<endl;

cout<<"First element is: "<<myqueue.front()<<endl;
cout<<"Last element is: "<<myqueue.back();
cout<<"Your queue is: "<<endl;
printqueue(myqueue);
    return 0;
}
