#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    int count=0;
    int flag=0;
    for (int i = 0; i < pattern.size(); i++)
    {
      if(pattern[i]==')')
         count--;
      else
         count++;

      if (count < 0) {
         flag = flag + 1;
         count++;
      }
    }
    return count+flag;
}