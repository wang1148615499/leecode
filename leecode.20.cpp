/*************************************************************************
	> File Name: leecode.20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 19时16分30秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
bool isValid(char * s){
    char str[10000];
    int len = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[' || len == 0) str[len++] = s[i]; 
        else {
            if (s[i] == str[len - 1] + 1 || s[i] == str[len - 1] + 2) len--;
            else return false;
        }
    }
    if (len == 0) return true;
    else return false;
}
