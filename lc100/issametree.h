#ifndef __issametree_h
#define __issametree_h

#include <iostream>

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

    void preOrderTraverseTree(TreeNode* rootNode);  // 前序
    void inOrderTraverseTree(TreeNode* rootNode);  // 中序
    void postOrderTraverseTree(TreeNode* rootNode);  // 后序

    bool isSameTree(TreeNode* p, TreeNode* q);  // 判断是否为相同的树
};

#endif 