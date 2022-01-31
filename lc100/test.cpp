#include <iostream>

#include "issametree.h"


int main() {
    Solution sol;
    TreeNode *tree1, *tree2;
    cout << "create your tree1: " << endl;
    sol.createTreeByCin(tree1);
    cout << "completed" << endl;

    sol.preOrderTraverseTree(tree1); cout << endl;
    sol.inOrderTraverseTree(tree1); cout << endl;
    sol.postOrderTraverseTree(tree1); cout << endl;

    cout << "create your tree2: " << endl;
    sol.createTreeByCin(tree2);
    cout << "completed" << endl;
    
    sol.preOrderTraverseTree(tree1); cout << endl;
    sol.inOrderTraverseTree(tree1); cout << endl;
    sol.postOrderTraverseTree(tree1); cout << endl;

    cout << "validate your func: " << endl;
    cout << "is same tree? " << sol.isSameTree(tree1, tree2) << endl;

    return 0;
}