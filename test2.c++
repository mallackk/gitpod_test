#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    // Node* prevNode;
}

void printList(Node* head)
{
    Node* NewNode = new Node();
    if(head == NULL) {
        cout<<"The head is NULL!!";
    }
    else {
        NewNode=head->next;
        while(NewNode!=NULL) {
            cout<<NewNode->data<<" ";
            NewNode=NewNode->next;
        }
    }
}

Node* insertNode(Node* head, int newdata)
{
    if(head==NULL) {
        cout<<"The head is NULL!!";
        return head;
    }
    Node* newNode = new Node();
    newNode->data=newdata;
    

    return head;
}
int main() {

    return 0;
}