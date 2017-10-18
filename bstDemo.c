#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

void ui(){
  FILE* file = fopen("./names.txt","r");
  char *line=NULL;
  ssize_t read;
  size_t len = 0;
  node *r = NULL;
  node *tree = NULL;
  int in;
  int i = 1;
  char *del;
  while(i == 1){
    printf("1.Show employees\n");
    printf("2.Add Employee\n");
    printf("3.Remove employe\n"); 
    printf("4.Exit\n");
    scanf("%d" ,&in);
    switch(in)
    {
    case 1:
      printf("Employees:\n");
      printInOrder(tree,file);
      break;
    case 2:
      printf("enter name to add\n");
      tree=insert(tree,"Hello");
      break;
    case 3:
      
      printf("enter name to remove\n");
      scanf("%s",del);
      tree = delete(tree,del);
      printInOrder(tree,file);
      break;
    case 4:
      i = 0;
      break;
    }
  }
}

node* construct(){
  FILE* file = fopen("./names.txt","r");
  char *line=NULL;
  ssize_t read;
  size_t len = 0;
  node *r = NULL;
 
    
  return r;
}

int main()
{
  ui();
  return 1;  
}
