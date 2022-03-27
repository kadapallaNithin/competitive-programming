#include "linkedlist.h"
bool detectLoop(Node* head){
/*        Node* curr = head;
    while(curr){
        if(curr->data < 0){
            return true;
        }
        curr->data = -1;
        curr = curr->next;
    }
    return false;*/
    //Floyd’s Cycle-Finding Algorithm
    if(head == NULL || head->next == NULL){
        return false;
    }
    Node* slow = head->next;
    Node* fast = head->next->next;
    while(fast){
        if(fast == slow){
            return true;
        }
        slow = slow->next;
        if(fast->next)
            fast = fast->next->next;
        else
            return false;
    }
    return false;
}