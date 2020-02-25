/*************************************************************************
	> File Name: leetcode141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时31分18秒
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
bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    if (p == NULL) return false;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return false;
        q = q->next;
    } while (p != q);
    return true;
}
