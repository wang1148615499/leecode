/*************************************************************************
	> File Name: leetcode83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时28分34秒
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


struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head == NULL) return head;
    struct ListNode *p = head->next, *pre = head, *d;
    while (p) {
        if (p->val == pre->val) {
            d = p;
            pre->next = p->next;
            p = p->next;
            free(d);
        } else {
            pre = p;
            p = p->next;
        }
    }
    return head;
}
