/*************************************************************************
	> File Name: leetcode107.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 16时30分25秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
nt getDepth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int l = getDepth(root->left);
    int r = getDepth(root->right);
    return (l > r ? l : r) + 1;
}

void getCnt(struct TreeNode *root, int *cnt, int k) {
    if (root == NULL) return ;
    cnt[k] += 1;
    getCnt(root->left, cnt, k - 1);
    getCnt(root->right, cnt, k - 1);
    return ;
}

void getResut(struct TreeNode *root, int k, int *cnt, int **ret) {
    if (root ==NULL) return ;
    ret[k][cnt[k]++] = root->val;
    getResut(root->left, k - 1, cnt, ret);
    getResut(root->right, k - 1, cnt, ret);
}

int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    int n = getDepth(root);
    int **ret = (int*)malloc(sizeof(int*) * n);
    int *cnt = (int*)calloc(n, sizeof(int));
    getCnt(root, cnt, n - 1);
    for (int i = 0; i < n; i++) {
        ret[i] = (int*)malloc(sizeof(int) * cnt[i]);
        cnt[i] = 0;
    }
    getResut(root, n - 1, cnt, ret);
    *returnSize = n;
    *returnColumnSizes = cnt;
    return ret;
}
