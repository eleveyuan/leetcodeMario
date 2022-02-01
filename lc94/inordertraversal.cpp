#include "inordertraversal.h"

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

vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> res;
    stack<TreeNode*> stk;  // 存储这个node
    while (root != nullptr || !stk.empty()) {
        while (root != nullptr) {
            stk.push(root);
            root = root->left;
        }
        root = stk.top();
        stk.pop();
        res.push_back(root->val);
        root = root->right; // 用出栈的节点访问右节点
    }
    return res;
}