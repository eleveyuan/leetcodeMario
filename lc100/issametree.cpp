#include "issametree.h"

/**
 * 注意函数的声明，入参是：TreeNode*&
 * 因为node是一个指针，在new的时候会更改其地址，所以外部需要知道更改的地址，所以加一层引用
 * *&与** 
 *      https://stackoverflow.com/questions/5789806/meaning-of-and-in-c
 * 指针与引用的区别 
 *      https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in
 */
void Solution::createTreeByCin(TreeNode*& rootNode) {
    char val;
    cout << "input '#' to quit: ";
    cin >> val; 
    if (val == '#') { 
        rootNode = nullptr;
    } 
    else {
        int num = (int)val - ZERO_ASCII;
        rootNode = new TreeNode(num);
        cout << "node value: " << rootNode->val << endl;
        createTreeByCin(rootNode->left);
        createTreeByCin(rootNode->right);
    }
}

void Solution::preOrderTraverseTree(TreeNode* rootNode) {
    if (rootNode) {
        cout << rootNode->val;
        preOrderTraverseTree(rootNode->left);
        preOrderTraverseTree(rootNode->right);
    }
}

void Solution::inOrderTraverseTree(TreeNode* rootNode) {
    if (rootNode) {
        preOrderTraverseTree(rootNode->left);
        cout << rootNode->val;
        preOrderTraverseTree(rootNode->right);
    }
}

void Solution::postOrderTraverseTree(TreeNode* rootNode) {
    if (rootNode) {
        preOrderTraverseTree(rootNode->left);
        preOrderTraverseTree(rootNode->right);
        cout << rootNode->val;
    }
}

bool Solution::isSameTree(TreeNode* p, TreeNode* q) {
    // 树是否相同
    if (p == nullptr && q == nullptr) {
        return true;
    } else if (p == nullptr || q == nullptr) {
        return false;
    } else if (p->val != q->val) {
        return false;
    } else {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}