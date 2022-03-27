#include "../tree.h"
// See left view for DF strategy
vector<int> levelOrderRightView(TreeNode<int>* root){
    vector<int> ans;
    queue<TreeNode<int>*> q;
    if(root){
        q.push(root);
        ans.push_back(root->data);
    }else{
        return ans;
    }
    // You can use size strategy instead of NULL delemiter strategy.
    q.push(NULL);
    while(!q.empty()){
        TreeNode<int>* node = q.front();
        q.pop();
        if(node){
            if(node->right)
                q.push(node->right);
            if(node->left)
            	q.push(node->left);
        }else{
            if(!q.empty()){
                TreeNode<int>* temp = q.front();
    	            ans.push_back(temp->data);                    
	                q.push(NULL);                    
            }
        }
    }
    return ans;
}