    if(root){
        long long ls,rs;
        long long lms = maxSubTreeSum(root->left,ls);
        long long rms = maxSubTreeSum(root->right,rs);
        s = root->data + ls + rs;
        long long ms = rms;
        if(lms > rms){
            ms = lms;
        }
        if(s > 0){
            
        }
    }
    s = 0;
    return 0;
