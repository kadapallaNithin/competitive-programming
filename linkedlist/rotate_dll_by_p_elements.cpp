#include<linkedlist.h>
DLLNode<int> *rotate_dll_by_p_elements(DLLNode<int> *start,int p)
{   
    DLLNode<int>* prev_start = start;
    DLLNode<int>* curr = start;
    for(int i=0; i<p; i++){
        curr = curr->next;
    }
    start = curr;
    while(curr->next){
        curr = curr->next;
    }
    curr->next = prev_start;
    prev_start->prev = curr;
    start->prev->next = NULL;
    start->prev = NULL;
    return start;
}