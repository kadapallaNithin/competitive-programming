#include "../tree"
void mirror(Node* root_node) {
    stack<pair<Node*,int>> st;
    st.push(make_pair(root_node,0));
    while(!st.empty()){
        pair<Node*,int> p = st.top();
        st.pop();
        Node* node = p.first;
        int state = p.second;
        if(node){
//               mirror(node->left);
//               mirror(node->right);
            if(state == 1){
                Node* temp = node->left;
                node->left = node->right;
                node->right = temp;
            }else{
                st.push(make_pair(node,1));
                st.push(make_pair(node->right,0));
                st.push(make_pair(node->left,0));
            }
        }
    }
}