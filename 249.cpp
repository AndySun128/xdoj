#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;


int main(){
    vector<int> prime={2,3,5,7,11,13,17,19,23,29,31},res;
    int n;cin>>n;
    for(int i:prime) {
        while (!(n%i)) {
            res.push_back(i);
            n/=i;
        }
    }
    cout<<res[0];
    for (int i=1;i<res.size();i++)cout<<"*"<<res[i];
}
