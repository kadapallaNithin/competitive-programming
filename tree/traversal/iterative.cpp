#include "tree.h"
vector<int> inOrder(Node* root_node)
{
    vector<int> in_order;
    stack<pair<Node*,int>> st;
    st.push(make_pair(root_node,0));
    while(!st.empty()){
        pair<Node*,int> p = st.top();
        st.pop();
        Node* node = p.first;
        int state = p.second;
        if(node){
            if(state == 1){
                in_order.push_back(node->data);
            }else{
                st.push(make_pair(node->right,0));
                st.push(make_pair(node,1));
                st.push(make_pair(node->left,0));
            }
        }
    }
    return in_order;
}
