/*************************************************************************
	> File Name: leetcode101.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 14时56分59秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
bool is_check(struct TreeNode *p, struct TreeNode *q) {
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q== NULL) return false;
    if (p->val - q->val) return false;
    return is_check(p->right, q->left) && is_check(p->left, q->right);
}


bool isSymmetric(struct TreeNode* root){
    if (root == NULL) return true;
    return is_check(root->right, root->left);
}
