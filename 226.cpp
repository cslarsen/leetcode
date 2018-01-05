/*
 * Leetcode problem 26 by Christian Stigen Larsen
 *
 * This was insanely easy.
 */

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if ( root ) {
            invertTree(root->left);
            invertTree(root->right);

            TreeNode *tmp = root->left;
            root->left = root->right;
            root->right = tmp;
        }
        return root;
    }
};

int main(){
}
