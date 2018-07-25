#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"


// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p=list->head;
  Node *a;
  int maxium=list->head->data;
  while(p){
    if(p->data>maxium){
      maxium=p->data;
      a=p;
    }
    p=p->next;
  }
  return a;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {
  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p=list->head;
  Node *a=p;
  int minium=list->head->data;
  while(p){

    if((p->data)<minium){
      minium=p->data;
      a=p;
    }
    p=p->next;
      }
  return a;
 
  

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p=list->head;
  int maximum=list->head->data;
  while(p){
    if(p->data>maximum){
      maximum=p->data;
    }
    p=p->next;
  }

  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  
  return maximum;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list){
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p=list->head;
  int minium=list->head->data;
  while(p){
    if(p->data<minium){
      minium=p->data;
    }
    p=p->next;
  }


  return minium;

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).
  int sum=0;
  Node *p=list->head;
  while(p){
    sum=sum+p->data;
    p=p->next;
  }
  return sum;  // STUB!  Replace this line with correct code

}
void deleteNodeIteratively(LinkedList * list,int value){
  assert(list!=NULL);
  if(list->head==0){
    return;
   
  }
 
  if(list->head->data==value){
    Node *q=list->head->next;
    delete list->head;
    list->head=q;
    return;
   
  }
  if(list->tail->data==value){
    Node *p=list->head;
    while(p->next!=list->tail){
      p=p->next;
    }
    delete list->tail;
    list->tail=p;
    p->next=0;
    return;
  }
  Node *m=list->head;
  Node *n=list->head->next;
  while(n){
    if(n->data==value){
      m->next=n->next;
      delete n;
    }
    m=m->next;
    n=m->next;
  }

  
    


    
}  
  
  




void insertNodeToSortedList(LinkedList *list, int value){
  Node *p= new Node;
  p->data=value;
  Node *q=list->head;
  if(list->head==NULL){
    list->head=p;
    list->tail=list->head;
    list->tail->next=NULL;
  }else{
  
    if(value<=(list->head->data)){
    addIntToStartOfList(list,value);
    }else if(value>=(list->tail->data)){
    addIntToEndOfList(list,value);
    }else{
    
  while(q){
    if((value>(q->data))&&(value<=(q->next->data))){
      p->next=q->next;
      q->next=p;
      
      
    }
    q=q->next;}
    }
  }
}
    
  
