#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insert(node* &head , int val){
    node* n = new node(val);
    if(head == NULL){
        head=n;
        return;
    } 

    node* temp = head; 
    while(temp->next!= NULL){
        temp=temp->next;
    } 
    temp->next = n;
}

void print(node* head){
    node* temp =head;
    while(temp !=NULL){
       
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void reverse(node* &head){
    node* cur = head;
    node *prev=NULL ;
    node *temp=NULL;
    while(cur!=NULL){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    } 
    head=prev;
}
void size(node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    cout<<count;
}

int main(){

    node* head = NULL;
    
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    print(head);
    cout<<endl;
    size(head);
    cout<<endl;
    reverse(head);
    print(head);
    return 0;
}
