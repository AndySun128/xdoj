#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n,temp,p;
    cin>>n;
    vector<int> nums,res;
    for (int i=0;i<n;i++) {
        cin>>temp;
        nums.push_back(temp);
    }
    p=1;
    while (p) {
        p=0;
        res.clear();
        for (int i=0;i<nums.size();i++) {
            if (i+1!=nums.size()&&nums[i] == nums[i + 1]) {
                p=1;
                i++;
            }else {
                res.push_back(nums[i]);
            }
        }
        nums=res;
    }
    if (nums.size()) {
        for (int i = 0; i < res.size(); i++) {
            cout<<res[i]<<" ";
        }
    }else {
        cout<<"NULL";
    }

    return 0;
}