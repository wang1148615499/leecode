/*************************************************************************
	> File Name: leetcode203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 17时36分31秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = &ret;
    while (p && p->next) {
        if (p->next->val == val) {
            q = p->next;
            p->next = q->next;
            free(q);
        }
        else  p = p->next;
    }
    return ret.next;
}
