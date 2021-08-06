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

void insertathead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

void printll(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool searchll(node* head, int val){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    node* head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertathead(head, 7);
    printll(head);
    cout << searchll(head, 9) << endl;
    cout << searchll(head, 7) << endl;
    return 0;
}