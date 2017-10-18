#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

node *new(char* n){
    node *new_node;
    new_node = (node*)malloc(sizeof(node));
    new_node->right = NULL;
    new_node->left = NULL;
    new_node->person = n;
    // printf("%s",new_node->person);
    return new_node;
}
node* insert(node *r, char* n){
  if(r==NULL){
    return new(n);
  }
  else{
    if(strcmp(n,r->person) < 0){
    r->left = insert (r->left,n);
    //     printf("left");
    }
    else{
    r ->right = insert(r->right,n);
    //  printf("right");
    }
  }
  return r;  
}
void printInOrder(node *r, FILE* file){
  // printf("in print");
  if(r == NULL){
    return;
  } else{
    printInOrder(r->left,file);
    printf("%s\n",r->person);
    fprintf(file,"%s\n",&(r->person));
    printInOrder(r->right,file);
  }

}
node *delete(node *r,char *n){
  if(r == NULL){
    return r;
  }
  if(strcmp(n,r->person)< 0 ){
    r->left = delete(r->right,n);
  }
  if(strcmp(n,r->person) >0){
      r->right = delete(r->right,n);
    }
  if(strcmp(n,r->person) ==0){
       if(r->left == NULL){
	 if(r->right == NULL){
	   r = NULL;
	 }
       }
    }
}
