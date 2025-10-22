#include <bits/stdc++.h>
using namespace std;

vector<int> primeNumber(int n);

int main(){
    int n, res = 0;  // ��l��res?0
    cin >> n;

    // �W�[??�S?��2000�A�̫O��]�t��?��??
    vector<int> ans = primeNumber(2000);

    for (int i = n-1; i < n+10; i++) {
        res += ans[i];
    }
    cout << res;
    return 0;
}

vector<int> primeNumber(int n){
    int j;
    vector<bool> all;
    vector<int> numbers;

    for (int k = 0; k <= n; k++)
        all.push_back(true);

    all[0] = all[1] = false;  // 0�M1���O??

    for(j = 2; j <= sqrt(n); j++){
        if(all[j]) {
            for(int i = j*j; i <= n; i += j)  // ?j*j?�l??
                all[i] = false;
        }
    }

    for(int i = 2; i <= n; i++){
        if(all[i])
            numbers.push_back(i);
    }
    return numbers;
}