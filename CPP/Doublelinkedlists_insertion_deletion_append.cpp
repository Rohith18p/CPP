#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        prev = NULL;
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
    n->prev = temp;
}

void insertathead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    n->next = head;
    head->prev = n;

    head = n;
    return;
}

void display(node* head){
    node* temp = head;
    cout << "NULL<=>";
    while(temp!=NULL){
        cout << temp->data << "<=>";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deletion(node* &head, int val){
    node* temp = head;
    if(temp->data == val){
        temp->next->prev = NULL;
        head = temp->next;

        delete temp;
        return;
    }
    while(temp->next->data!= val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    temp->next->next->prev = temp;

    delete todelete;
    return;
}

int length(node* head){
    int l=0;
    node* temp = head;
    while(temp->next!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

node* appendk(node* &head, int k, int l){
    node* temp = head;
    node* nhead;
    node* ntail;
    node* tail = head;
    int count=0;
    while(tail->next!= NULL){
        if(count == l-k){
            nhead = tail->next;
            ntail = tail;
        }
        count++;
        tail = tail->next;
    }
    tail->next = head;
    head->prev = tail;
    nhead->prev = NULL;
    ntail->next = NULL;

    return nhead;
}
int main(){
    node* head = NULL;
    insertatend(head, 9);
    insertatend(head, 7);
    insertatend(head, 5);
    insertatend(head, 3);
    insertatend(head, 2);
    insertatend(head, 1);
    insertathead(head, 10);
    display(head);

    deletion(head, 10);
    display(head);

    int len = length(head);
    head = appendk(head, 3, len);
    display(head);
    return 0;
}