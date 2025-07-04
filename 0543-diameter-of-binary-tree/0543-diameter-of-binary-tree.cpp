/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        height(root, maxDia);
        return maxDia;
    }

    int height(TreeNode* node, int& maxDia){
        if (!node){
            return 0;
        }

        int leftheight = height(node->left, maxDia);
        int rightheight = height(node->right, maxDia);
        maxDia = max(maxDia, leftheight + rightheight);
        return 1 + max(leftheight, rightheight);
    }
};