// platform - coding ninjas
//link - https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960
// concept - second largest element in an array 
vector<int> getSecondOrderElements(int n, vector<int> a) {
       vector<int>v;
       sort(a.begin(),a.end());
       v.push_back(a.at(n-2));
       v.push_back(a.at(1));
       return v;
}


