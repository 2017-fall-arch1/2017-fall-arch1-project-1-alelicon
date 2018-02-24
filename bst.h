#include <stdio.h>
#ifndef bst_included
#define bst_included

typedef struct Node{
  char *person;
  struct Node *right, *left;
}node;

node *new(char *n);

node* insert(node *r, char *n);

void printInOrder(node *r, FILE* file);

node * delete (node *r, char *n);
#endif
//hi
