/*************************************************************************
	> File Name: leetcode142.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时37分48秒
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
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p = head, *q =head;
    if (p == NULL) return NULL;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return NULL;
        q = q->next;
    } while (p != q);
    int cnt = 0;
    do {
        cnt++;
        p = p->next;
    } while (p != q);//cnt求环形链表的长度
    p = head, q = head;
    while (cnt--) p = p->next;//p提前走cnt长度后，p，q再一起走相遇的点便是第一个节点
    while (p != q) {
        p = p->next;
        q = q->next;
    }
    return p;
}
