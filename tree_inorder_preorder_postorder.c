#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *left;
    int data;
    struct node *right;
}*t=NULL;
struct node *newnode(int x){
    struct node *t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->left=t->right=NULL;
    return t;
}
struct node  *preorder(struct node* t){
    if(t==NULL){
        return;
    }
    printf("%d   ",t->data);
    preorder(t->left);
    preorder(t->right);
}
struct node *inorder(struct node* t){
    if(t==NULL)
    return;
    inorder(t->left);
    printf("%d  ",t->data);
    inorder(t->right);
}
struct node *postOrder(struct node* t){
    if(t==NULL)
    return;
    postOrder(t->left);
    postOrder(t->right);
    printf("%d   ",t->data);
}

int main(){
    struct node *root=newnode(10);
    root->left=newnode(20);
    root->right=newnode(5);
    root->left->left=newnode(4);
    root->left->right=newnode(8);
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postOrder(root);
}