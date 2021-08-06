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


int length(node* head){
    int l=0;
    node* temp = head;
    while(temp->next!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

node* merge(node* &head1, node* &head2){
    node* dum = new node(0);
    node* temp1 = head1;
    node* temp2 = head2;
    node* temp3 = dum;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            temp3->next = temp1;
            temp1 = temp1->next;
        }
        else if(temp1->data > temp2->data){
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }
    while(temp1!=NULL){
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }
    while(temp2!=NULL){
        temp3->next = temp2;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }
    cout << "done" << endl;
    return dum->next;
}

node* mergerec(node* &head1, node* &head2){

    if(head1 == NULL){
        return head2;
    }
    if(head2 = NULL){
        return head1;
    }
    node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next = mergerec(head1->next, head2);
    }
    else{
        result = head2;
        result->next = mergerec(head1, head2->next);
    }

    return result;
}
int main(){
    node* head1 = NULL;
    insertatend(head1, 1);
    insertatend(head1, 3);
    insertatend(head1, 5);
    insertatend(head1, 7);
    insertatend(head1, 9);
    cout << "Linked List 1" << endl;
    display(head1);

    node* head2 = NULL;
    insertatend(head2, 2);
    insertatend(head2, 4);
    insertatend(head2, 6);
    insertatend(head2, 8);
    cout << "Linked list 2" << endl;
    display(head2);

    node* head3 = mergerec(head1, head2);
    display(head3);
    return 0;
}