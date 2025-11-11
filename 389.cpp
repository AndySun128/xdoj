#include<iostream>
#include<cmath>
#include<vector>

std::vector<int> find_prime(int n) {
    if (n < 2)return {};
    std::vector arr(n+1,true);
    for (int i = 0; i <= n; i+=2) arr[i] = false;
    arr[1]=false;
    arr[2]=true;
    for(int i = 3; i*i <= n; i+=2) {
        if (arr[i]) {
            int j=i*i;
            while (j<=n) {
                arr[j]=false;
                j+=i<<1;
            }
        }
    }
    std::vector<int>res;
    for(int i = 2; i <= n; i++) {
        if (arr[i]) {
            res.push_back(i);
        }
    }
    return res;
}

int main() {
    //int a,b;std::cin>>a>>b;
    int n;std::cin>>n;
    int sum=0;
    std::vector<int> f=find_prime(n);
    //for(int i=std::min(a,b)-1;i<std::max(a,b);i++) {
    for (int i = 0; i < f.size(); i++){
        std::cout<<f[i]<<' ';
        //sum+=f[i];
    }

    //std::cout<<sum;
}