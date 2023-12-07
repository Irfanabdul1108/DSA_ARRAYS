// platform - coding ninjas
//link - https://www.codingninjas.com/studio/problems/linear-search_6922070
// concept - linear search
#include<bits/stdc++.h>
int linearSearch(int n, int num, vector<int> &arr)
{
    int count=0;
  for (int i = 0; i < n; i++) {
       if(arr[i]==num)
       return i;
       else
       count++;
  }
  if(count==n)
  return -1;

}
