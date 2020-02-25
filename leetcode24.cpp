/*************************************************************************
	> File Name: leetcode24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时23分20秒
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


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head2->next = head;
    struct ListNode *list = head2;
    struct ListNode *list1, *list2;
    while (list->next && list->next->next) {
        list1 = list->next;
        list2 = list1->next;
        list->next = list2;
        list1->next = list2->next;
        list2->next = list1;
        list = list->next->next;
    }    
    return head2->next;
}
