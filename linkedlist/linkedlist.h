#include<bits/stdc++.h>
using namespace std;
template<typename T>
class LinkedListNode{
    public:
    T data;
    LinkedListNode<T>* next;
    LinkedListNode(T data){
        this->data = data;
        this->next = NULL;
    }
    void print(){
        LinkedListNode<int>* curr = this;
        while (curr)
        {
            cout<<(curr->data)<<' ';
            curr = curr->next;
        }
        cout<<'\n';        
    }
};
void push_front(LinkedListNode<int>** head, int data){
        LinkedListNode<int>* first_node = new LinkedListNode<int>(data);
        first_node->next = *head;
        *head = first_node;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    while(curr){
        LinkedListNode<int>* temp = curr;
        curr = curr->next;
        temp->next = prev;
        prev = temp;
    }
    return prev;
}
LinkedListNode<int>* buildLinkedList(){
        int n;
        cin>>n;
        int x;
        LinkedListNode<int>* head = NULL;
        for(int i=0; i<n; i++){
            cin>>x;
            push_front(&head,x);
        }
        head = reverseLinkedList(head);
        return head;
}



//====================== Double Linked List =============================================
template<typename T>
class DLLNode{
    public:
    T data;
    DLLNode<T>* next;
    DLLNode<T>* prev;

    DLLNode<T>(T data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};