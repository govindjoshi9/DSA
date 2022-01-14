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

int main()
{
    /*
    //constructing the root node
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    //constructing the child node
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));

    p1->left = NULL;
    p1->right = NULL;

    //Second child node
    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->left = NULL;
    p2->right = NULL;

    //linking the root node with left and right child node 
    p->left = p1;
    p->right = p2;
*/

    //root node - using the function
    struct node*p = createNode(2);
    struct node*p1 = createNode(1);
    struct node*p2 = createNode(4);

    //linking the root node with left and right child node 
    p->left = p1;
    p->right = p2;
    return 0;
}