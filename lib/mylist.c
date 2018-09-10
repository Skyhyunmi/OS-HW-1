#include <stdlib.h>
//#include <stdio.h>
#include "mylist.h"

void mylist_init(struct mylist* l)
{
  l->head=NULL;
}

void mylist_destroy(struct mylist* l)
{
  for(struct mylist_node* pointer=l->head;pointer!=NULL;pointer=l->head){
    mylist_remove(l,pointer);
  }
  
}

void mylist_insert(
    struct mylist* l,struct mylist_node* before, int data)
{
  struct mylist_node* temp = (struct mylist_node*)malloc(sizeof(struct mylist_node));
  
  if(before==NULL){
    temp->data=data;
    temp->next=l->head;
    l->head=temp;
  }
  else{
    temp->data=data;
    temp->next=before->next;
    before->next=temp;
  }
}

void mylist_remove(
    struct mylist* l, struct mylist_node* target)
{
  if(target==l->head) {
    l->head=target->next;
    free(target);
    return;
  }
  for(struct mylist_node* pointer=l->head;
    pointer!=NULL;
    pointer=pointer->next){
      if(pointer->next==target) {
          pointer->next=target->next;
          free(target);
          return;
      }
    }
}

struct mylist_node* mylist_find(struct mylist* l, int target)
{
  for(struct mylist_node *pointer=l->head;
      pointer!=NULL;
      pointer=pointer->next){
        if(pointer->data==target) return pointer;
  }

  return NULL; // If not found
  
}

struct mylist_node* mylist_get_head(struct mylist* l)
{
  
  if(l->head) {
      return l->head;
  }
  return NULL;
}

void mylist_print(const struct mylist* l)
{
  for (struct mylist_node* pointer = l->head;
      pointer != NULL;
      pointer = pointer->next) {
        printf("%d\n", pointer->data);
  }
}