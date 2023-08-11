#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }

};

Node* insert(Node* head,int data){
    Node* n=new Node(data);

    if(head==NULL){
        head=n;
        return head;
    }

    n->next=head;
    head->prev=n;
    head=n;
    
    
    return head;
}

Node* insertAtEnd(Node* head,int data){
    Node* n=new Node(data);
    
     if(head==NULL){
        head=n;
        return head;
    }
    
    Node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=n;
    n->prev=temp;
    
    return head;
}

Node* pop(Node* head){
    if(head==NULL){
        return head;
    }
    
    Node* temp=head;
    head=head->next;
    delete(temp);
    return head;
}

Node* deleteLast(Node* head){
    Node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete(temp);
    return head;
}

void printList(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;

    head=insert(head,5);
    head=insert(head,4);
    head=insert(head,3);
    head=insert(head,2);
    head=insert(head,1);
    head=insertAtEnd(head,6);
    
    head=pop(head);
    
    head=deleteLast(head);

    printList(head);
    cout<<endl;
}

