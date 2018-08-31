#include <stdlib.h>

#include "mylist.h"

void mylist_init(struct mylist* l)
{
  // TODO: Fill it
}

void mylist_destroy(struct mylist* l)
{
  // TODO: Fill it
}

void mylist_insert(
    struct mylist* l,
    struct mylist_node* before, int data)
{
  // TODO: Fill it
}

void mylist_remove(
    struct mylist* l,
    struct mylist_node* target)
{
  // TODO: Fill it
}

struct mylist_node* mylist_find(struct mylist* l, int target)
{
  // TODO: Fill it

  return NULL; // If not found
}

struct mylist_node* mylist_get_head(struct mylist* l)
{
  // TODO: Fill it

  return NULL;
}

void mylist_print(const struct mylist* l)
{
  /*
   * HINT: Define structs referring comments
  for (struct mylist_node* pointer = l->head;
      pointer != NULL;
      pointer = pointer->next) {
    printf("%d\n", pointer->data);
  }
  */
}
