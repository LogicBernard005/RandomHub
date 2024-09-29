struct TreeNode* delete(struct TreeNode* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL) {
        free(root);
        // root = NULL;
        // return root;
        return NULL;
    }
    else if(key<root->data)
    {
        root->left=delete(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=delete(root->right,key);
    }
    else
    {
        if(root->right==NULL)
        {
            struct TreeNode* temp=NULL;
            temp=root->left;
            root=temp;
            return root;
        }
        else if(root->left==NULL)
        {
            struct TreeNode* temp=NULL;
            temp=root->right;
            root=temp;
            return root;
        }
        else
        {
            struct TreeNode* successor = root->right;
            while (successor->left != NULL)
            {
                successor = successor->left;
            }

            // Copy the inorder successor's data to the node to be deleted
            root->data = successor->data;
            // Delete the inorder successor
            root->right = delete(root->right, successor->data);
            free(successor);
            return root;
        }
    }
}
