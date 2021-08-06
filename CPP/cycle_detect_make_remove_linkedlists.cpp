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
        temp =  temp->next;
    }
    cout << "NULL" << endl;
    return;
}

void makecycle(node* &head, int pos){
    node* temp = head;
    node* rnode;
    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            rnode = temp;
        }
        count++;
        temp = temp->next;
    }
    temp->next = rnode;
    return;
}

void removecycle(node* &head){
    node* slow = head;
    node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(fast!=slow);

    fast = head;
    while(fast->next != slow->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
    return;
}

bool iscycle(node* head){
    node* slow = head;
    node* fast = head;

    while(fast!= NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

int main(){
    node* head = NULL;
    insertatend(head, 9);
    insertatend(head, 7);
    insertatend(head, 5);
    insertatend(head, 3);
    insertatend(head, 2);
    insertatend(head, 1);
    display(head);
    makecycle(head, 3);
    cout << iscycle(head) << endl;
    removecycle(head);
    cout << iscycle(head) << endl;
    return 0;
}