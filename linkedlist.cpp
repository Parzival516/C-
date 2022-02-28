#include <iostream>
using namespace std;

class Node
{
public:

int value;
Node* Next;
Node* prev;
};

void printlist(Node*n)
{
    while (n!=NULL)
    {
        cout<<n->value<<endl;
        n=n->Next;
    }
    

}

int main()
{
// Node* head=new Node();
// Node* second=new Node();
// Node* third=new Node();

// head->value=1;
// head->Next=second;
// second->value=2;
// second->Next=third;
// third->value=3;
// third->Next=NULL;





// printlist(head);


Node* head;
Node* tail;
Node* node=new Node();
node->value=4;
node->Next=nullptr;
node->prev=nullptr;
head=node;
tail=node;

node=new Node();
node->value=5;
node->Next=nullptr;
node->prev=tail;
tail->Next=node;
tail=node;

node=new Node();
node->value=6;
node->Next=nullptr;
node->prev=tail;
tail->Next=node;
tail=node;

printlist(head);


    return 0;
}