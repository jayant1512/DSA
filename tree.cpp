#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left = NULL;
        right= NULL;
    }
    };

struct node* createnode(int val){
    node* n= new node(val);
    n->left=NULL;
    n->right =NULL;
    return n;
};

int maxDepth(node* root)
{
    if (root == NULL)
        return -1;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);
     
        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}

void preorder(struct node* root){
    if(root != NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

    }}

void postorder(struct node* root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";}}

void inorder(struct node* root){
    if(root != NULL){
        cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }        

}
int main(){
    int val;
    node* p= createnode(2);
    node* p1= createnode(4);
    node* p2= createnode(6);
    node* p3= createnode(7);
    node* p4= createnode(5);
    node* p5= createnode(9);
    node* p6= createnode(0);


    p->left= p1;
    p->right= p2;
    p1->left= p3;
    p1->right= p4;
    p3->left= p5;
    p4->left= p6;

    preorder(p);
    cout<<"\n";

    postorder(p);
    cout<<"\n";

    inorder(p);
    cout<<"\n";

    cout<<"Height of tree:"<<maxDepth(p);
    return 0;

}