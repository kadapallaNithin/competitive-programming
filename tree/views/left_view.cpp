#include "../tree.h"
// This is DF strategy. See right view for BF strategy
int leftViewUtil(TreeNode<int>* root, vector<int>& v, int shadow_h){
    if(root){
        if(shadow_h-- <= 0){
            v.push_back(root->data);
        }
        int lh = 0, rh =0;
        if(root->left){
            lh = leftViewUtil(root->left,v,shadow_h);
        }
        if(root->right){
            if(shadow_h < lh){
                shadow_h = lh;
            }
            rh = leftViewUtil(root->right,v,shadow_h);
        }
        return 1 + max(rh,lh);
    }
    return 0;
}
vector<int> getLeftView(TreeNode<int> *root)
{	
    vector<int> ans;
    leftViewUtil(root,ans,0);
    return ans;
}