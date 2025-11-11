#include<iostream>
#include<vector>

int main() {
    int n;std::cin>>n;
    std::vector<int> v(1001,0);
    std::vector<std::pair<int,int>> res;
    for (int i = 0; i < n; i++){
        int temp;
        std::cin>>temp;
        v[temp]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (v[i]) {
            res.push_back(std::make_pair(i,v[i]));
        }
    }
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res.size()-i-1; j++) {
            if (res[j].second < res[j+1].second) {
                std::swap(res[j],res[j+1]);
            }else if (res[j].second == res[j+1].second) {
                if (res[j].first > res[j+1].first) {
                    std::swap(res[j],res[j+1]);
                }
            }
        }
    }
    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i].first << " "<< res[i].second << std::endl;
    }
}