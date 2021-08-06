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
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void evenafterodd(node* &head){
    node* odd = head;
    node* even = head->next;
    node* evens = even;

    while(odd->next!=NULL && even->next !=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evens;
    if(odd->next == NULL){
        even->next = NULL;
    }
}

int main(){
    node* head = NULL;
    int ar1[6] = {1, 2, 3, 4, 7, 9};
    //int ar2[5] = {2, 4, 6, 8, 10};
    for(int i=0; i<6; i++){
        insertatend(head, ar1[i]);
    }
    display(head);
    evenafterodd(head);
    display(head);
    return 0;
}