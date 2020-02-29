/*************************************************************************
	> File Name: leecode104.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 16时14分50秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int maxDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return (l > r ? l : r) + 1;
}
