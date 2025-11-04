#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int len;cin>>len;
    std::vector<string> n(len),res;
    for(int i=0;i<len;i++) {
        cin>>n[i];
    }
    int m;cin>>m;
    std::pair<string,float> s[m];
    float total=0,ave;
    for(int i=0;i<m;i++) {
        cin>>s[i].first>>s[i].second;
        total+=s[i].second;
    }
    ave=total/m;
    int luren=0;
    for(int i=0;i<m;i++) {
        bool in=false;
        for(int j=0;j<len;j++) {
            if(s[i].first==n[j]) {
                in=true;
                break;
            }
        }
        if(!in) {
            if (s[i].second>ave)res.push_back(s[i].first);
            luren++;
        }
    }
    if (res.size()) {
        for(string i:res) {
            cout<<i<<endl;
        }
    }else {
        cout<<luren;
    }
}