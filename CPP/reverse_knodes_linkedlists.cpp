#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertatend(node* &head, int val){

    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

node* reversek(node* &head, int k){

    node* prevp = NULL;
    node* currp = head;
    node* nextp;

    int i=0;
    while(currp !=NULL && i<k){
        nextp = currp->next;
        currp->next = prevp;

        prevp = currp;
        currp = nextp;
        i++;
    }

    if(nextp!=NULL){
        head->next = reversek(nextp, k);
    }

    return prevp;
}

int main(){
    node* head = NULL;
    insertatend(head, 9);
    insertatend(head, 7);
    insertatend(head, 2);
    insertatend(head, 1);
    display(head);
    head = reversek(head, 2);
    display(head);
    return 0;
}