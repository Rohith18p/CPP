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

void deletion(node* &head, int val){
    node* temp = head;
    if(head == NULL){
        return;
    }
    else if(head->data == val){
        head = head->next;
        delete temp;
        return;
    }
    while(temp->next->data !=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    return;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

node* reverselist(node* &head){
    node* prevp = NULL;
    node* currp = head;
    node* nextp;

    while(currp != NULL){
        
        nextp = currp->next;
        currp->next = prevp;
        
        prevp = currp;
        currp = nextp;
    }

    return prevp;
}

node* reverserec(node* &head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    node* newhead = reverserec(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
int main(){
    node* head = NULL;
    insertatend(head, 9);
    insertatend(head, 7);
    insertatend(head, 2);
    insertatend(head, 1);
    display(head);
    //deletion(head, 9);
    //display(head);
    head = reverselist(head);
    display(head);
    head = reverserec(head);
    display(head);
    return 0;
}