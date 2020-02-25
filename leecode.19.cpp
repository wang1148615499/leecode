/*************************************************************************
	> File Name: leecode.19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时10分49秒
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


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int m = 0;
    struct ListNode *temp = NULL;
    struct ListNode *list = head;
    while (head->next != NULL) {
        head = head->next;
        m++;
        if (m == n) {
            temp = list;
            continue;
        }
        if (temp) temp = temp->next;
    }
    if (temp == NULL) {
        head = list->next;
        free(list);
        return head;
    }
    head = temp->next;
    temp->next = temp->next->next;
    free(head);
    return list;
}
