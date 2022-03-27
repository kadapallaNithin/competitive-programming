#include "linkedlist.h"
int getMiddle(LinkedListNode<int>* head){
    if(head == NULL){
        return -1;
    }
    LinkedListNode<int>* fast = head;
    LinkedListNode<int>* slow = head;
    while(fast){
        if(fast->next){
            fast = fast->next->next;
        }else{
            break;
        }
        slow = slow->next;
    }
    /* More general approach
     * Move faster pointer node by node and increase counter by 1
     * if counter % X == 0 : move slow pointer
     * Here X = 2
     */
    return slow->data;
}