#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int minDepth(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    return 1 + min(left, right);
}
int main()
{
    return 0;
}