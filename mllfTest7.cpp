#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {
  //Test your insertNodeToSortedList function
  //Test your code extensively
  assertTrue(true);
  int fiveNums[3]={42,57,61};
  int a[0]={};
  LinkedList *list1=arrayToLinkedList(a,0);
  insertNodeToSortedList(list1,2);
   assertEquals( "[2]->null", 
		linkedListToString(list1),
		"list after adding 2");
    insertNodeToSortedList(list1,2);
    assertEquals( "[2]->[2]->null", 
		linkedListToString(list1),
		"list after adding 2");
     insertNodeToSortedList(list1,3);
      assertEquals( "[2]->[2]->[3]->null", 
		linkedListToString(list1),
		"list after adding 3");
      insertNodeToSortedList(list1,3);
      assertEquals( "[2]->[2]->[3]->[3]->null", 
		linkedListToString(list1),
		"list after adding 3");
 insertNodeToSortedList(list1,8);
      assertEquals( "[2]->[2]->[3]->[3]->[8]->null", 
		linkedListToString(list1),
		"list after adding 8");
      insertNodeToSortedList(list1,3);
      assertEquals( "[2]->[2]->[3]->[3]->[3]->[8]->null", 
		linkedListToString(list1),
		"list after adding 3");


    

  LinkedList *list = arrayToLinkedList(fiveNums,3);
  assertEquals( "[42]->[57]->[61]->null", 
		linkedListToString(list),
		"linkedListToString(list)");
  insertNodeToSortedList(list,25);
   assertEquals( "[25]->[42]->[57]->[61]->null", 
		linkedListToString(list),
		"list after adding 25");
   insertNodeToSortedList(list,58);
    assertEquals( "[25]->[42]->[57]->[58]->[61]->null", 
		linkedListToString(list),
		"list after adding 58");
    insertNodeToSortedList(list,62);
   assertEquals( "[25]->[42]->[57]->[58]->[61]->[62]->null", 
		linkedListToString(list),
		"list after adding 62");
   insertNodeToSortedList(list,46);
    assertEquals( "[25]->[42]->[46]->[57]->[58]->[61]->[62]->null", 
		linkedListToString(list),
		"list after adding 46");
    freeLinkedList(list);
    freeLinkedList(list1);
     
  return 0;
}

