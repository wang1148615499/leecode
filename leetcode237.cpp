/*************************************************************************
	> File Name: leetcode237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 17时41分36秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *p = node->next;
    node->val = p->val;
    node->next = p->next;
    free(p);
    return ;
}
