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

void intersect(node* &head1, node* &head2, int pos){
    node* temp1 = head1;
    node* temp2 = head2;

    while(pos){
        temp1 = temp1->next;
        pos--;
    }

    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    return;
}

int interpoint(node* &head1, node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d=0;
    
    node* temp1;
    node* temp2;

    if(l1>l2){
        d = l1-l2;
        temp1 = head1;
        temp2 = head2;
    }
    else if(l2 > l1){
        d = l2-l1;
        temp1 = head2;
        temp2 = head1;
    }

    while(d){
        temp1 = temp1->next;
        d--;
    }

    while(temp1->next!=NULL & temp2->next!=NULL){
        if(temp1->data == temp2->data){
            return temp1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;

}

int main(){
    node* head1 = NULL;
    insertatend(head1, 9);
    insertatend(head1, 7);
    insertatend(head1, 5);
    insertatend(head1, 3);
    insertatend(head1, 2);
    insertatend(head1, 1);
    cout << "Linked List 1" << endl;
    display(head1);

    node* head2 = NULL;
    insertatend(head2, 6);
    insertatend(head2, 4);
    cout << "Linked list 2" << endl;
    display(head2);

    intersect(head1, head2, 4);
    cout << "After Intersection" << endl;
    display(head2);
    cout << "The intersection value is :" << interpoint(head1, head2) << endl;
    return 0;
}