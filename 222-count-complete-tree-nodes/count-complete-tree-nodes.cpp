class Solution {
public:

    int leftHeight(TreeNode* root) {
        int h = 0;
        while (root != nullptr) {
            h++;
            root = root->left;
        }
        return h;
    }

    int rightHeight(TreeNode* root) {
        int h = 0;
        while (root != nullptr) {
            h++;
            root = root->right;
        }
        return h;
    }

    int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int left = leftHeight(root);
        int right = rightHeight(root);

        if (left == right) {
            return (1 << left) - 1;
        }

        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};