#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

int main()
{
  FILE * file_names;
  char * line = NULL;
  size_t bsize = 0;
  size_t ch;
   file_names = fopen("./names.txt","r"); //read
  if(file_names == NULL){
    printf("null file");
  }
  fclose(file_names);
  // node *r = new("test");
  node *r=NULL;
   char *aperson1 = (char *)malloc(sizeof 256);
    r=insert(r,"aperson1");
    r=insert(r,"cperson2");
    r=insert(r,"bperson3");
  // printf("%s\n",r->person);

  //write file
  
  FILE * o_names;
  o_names = fopen("./orderedNames.txt","w"); 
  printInOrder(r,o_names);
  fclose(o_names);
  // fprintf(o_names,"%s","string test");
  // while((ch = getline(&line,&bsize, file_names)) != -1){
   // fprintf(ordered,"%s\n",line);
   // printInOrder(*r)
  // fprintf(o_names,"%s\n","string test");
  // }
  return 1;  
}
