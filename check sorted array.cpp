// platform - coding ninjas
//link - https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957
// concept -check sorted array
int isSorted(int n, vector<int> a) {
     int k=*max_element(a.begin(),a.end());
     if(k==a[n-1] || k==a[0])
     return 1;
     else
     return 0;
}
