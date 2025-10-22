#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,temp,p,a,b;
    cin>>n;
    vector<int> nums,res;
    for (int i=0;i<n;i++) {
        cin>>temp;
        nums.push_back(temp);
    }
    a=nums[0],b=nums[0];
    for (int i=1;i<n;i++) {
        if (nums[i]==nums[i-1]) {
                a+=nums[i];
        }else {
            if (a>b) {
                b=a;
            }
            a = nums[i];
        }
    }
    if (a>b) {
        b=a;
    }
    cout<<b<<endl;
    return 0;
}