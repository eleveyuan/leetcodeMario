#ifndef __inordertraversal_h
#define __inordertraversal_h

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 叶子定义
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    int ZERO_ASCII = 48;  // 0的ascii码，用于字符转数字
public:
    // 创建二叉树
    void createTreeByCin(TreeNode*& rootNode);  
    TreeNode* createTree(int &a, int len);

    vector<int> inorderTraversal(TreeNode* root);  // 中序返回序列

};

#endif 