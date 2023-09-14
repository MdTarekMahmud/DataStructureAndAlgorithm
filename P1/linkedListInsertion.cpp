#include<iostream>
using namespace std;
struct node
{
    int value;
    struct node* next;
};
void displayNode(struct node* p){
    while(p!=NULL){
        cout << p->value << " ";
        p=p->next;
    }
}
int main()
{
    struct node* head;
    struct node* one =NULL;
    struct node* two = NULL;
    struct node* three = NULL;

    one = new node;
    two = new node;
    three = new node;

    one ->next= two;
    two ->next = three;
    three ->next = NULL;

    one -> value = 11;
    two -> value =12;
    three -> value =13;
    head = one;

    // INSERT AT BEGINING
    struct node* newNode;
    newNode = new node;
    newNode->value= 177;
    newNode -> next = head;
    head = newNode;
    
    displayNode(head);
    cout << endl;


    return 0;
}