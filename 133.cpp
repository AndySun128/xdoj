#include<iostream>
#include<vector>

int main() {
    int n,m,t;std::cin>>n>>m>>t;
    int len=std::max(n,m);
    int res[len];
    for(int i=0;i<len;i++) {
        res[i]=0;
    }
    for (int i=0;i<n;i++) {
        int index,c;std::cin>>c>>index;
        res[index]=c;
    }
    switch (t) {
        case 0:
            for (int i=0;i<m;i++) {
                int index,c;std::cin>>c>>index;
                res[index]+=c;
            }
        case 1:
            for (int i=0;i<m;i++) {
                int index,c;std::cin>>c>>index;
                res[index]-=c;
            }
    }
    if
    std::cout<<res[0];
    for (int i=1;i<len;i++) {

    }
}