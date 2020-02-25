/*************************************************************************
	> File Name: leetcode160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时40分37秒
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
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    while (q != p) {
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return p;
}
