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
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!= head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    return;
}

void display(node* &head){
    node* temp = head;
    do{
        cout << temp->data << "->";
        temp = temp->next;
    }while(temp!=head);
    cout << "NULL" << endl;
    return;
}

void deletion(node* &head, int pos){
    node* temp = head;
    int c=1;
    if(pos==1){
        while(temp->next!=head){
            temp = temp->next;
        }
        node* todel = head;
        temp->next = head->next;
        head = head->next;
        delete todel;
        return;

    }
    while(c!=pos-1){
        temp = temp->next;
        c++;
    }
    node* todel = temp->next;
    temp->next= temp->next->next;
    delete todel;
    return;
}
int main(){
    node* head = NULL;
    int ar1[6] = {1, 2, 3, 5, 7, 9};
    //int ar2[5] = {2, 4, 6, 8, 10};
    for(int i=0; i<6; i++){
        insertatend(head, ar1[i]);
    }
    display(head);
    deletion(head, 1);
    display(head);
    return 0;
}