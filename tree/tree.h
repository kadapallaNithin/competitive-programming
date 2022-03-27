#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
template <typename T>
class TreeNode {
   public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;
    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};