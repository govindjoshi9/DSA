#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node * createNode(int data){
    struct node * n; //crating node pointer
    n = (struct node *)malloc(sizeof(struct node)); //alloca te memory
    n->data = data; //setting the data 
    n->left = NULL;
    n->right = NULL;
    return n;

}

void inOrder(struct node * root){
    if(root != NULL){
       inOrder(root->left); 
       printf("%d",root->data);
       inOrder(root->right); 
    }
}
struct node* inOrderPredecessor(struct node *root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}
struct node * deletionNode(struct node *root, int value){
    struct node* iPre;

    if(root ==NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    //search for the node to the deleting
    if(value< root->data){
        deletionNode(root->left,value);
    }
    else if(value> root->data){
        deletionNode(root->right,value);
    }
    else {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deletionNode(root->left,iPre->data);

    }
    return root;
}

int main()
{
   
    //root node - using the function
    struct node*p = createNode(4);
    struct node*p1 = createNode(1);
    struct node*p2 = createNode(6);
    struct node*p3 = createNode(5);
    struct node*p4 = createNode(2);

    //linking the root node with left and right child node 
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    deletionNode(p,2);
    return 0;
}