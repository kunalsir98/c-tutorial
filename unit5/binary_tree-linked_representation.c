#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left , *right;

};

struct node *createNode(int data)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;

    
}