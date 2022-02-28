#include <iostream>
using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};
void printList(Node* n) {
    while (n!=NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertatthefront(Node**head, int newvalue){
Node* newnode=new Node();
newnode->Value=newvalue;
newnode->Next=*head;
*head=newnode;
}

void insertattheend(Node**head, int newvalue){
Node* newnode=new Node();
newnode->Value=newvalue;
newnode->Next=NULL;
if(*head==NULL)
{
    *head=newnode;
    return;
}
Node* last=*head;


while (last->Next!=NULL)
{
    last=last->Next;
}
last->Next=newnode;

}

void insertafter(Node*prev, int newvalue){
if (prev==NULL)
{
    cout<<"Previous cant be NULL";
    return;
}
Node*newnode=new Node();
newnode->Value=newvalue;
newnode->Next=prev->Next;
prev->Next=newnode;

}


int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;
    insertafter(&head, -1);
    // insertatthefront(&head, -1);
    // insertatthefront(&head, -2);
    // insertattheend(&head,4);
    
    
    printList(head);

    return 0;
}