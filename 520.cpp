#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    // Remove double quotes if present
    if (!s.empty() && s.front() == '"' && s.back() == '"') {
        s = s.substr(1, s.length() - 2);
    }

    int n = s.length();
    if (n == 0) {
        cout << 0;
        return 0;
    }

    bool seen[256] = {false};
    int left = 0;
    int max_len = 0;

    for (int right = 0; right < n; right++) {
        while (seen[s[right]]) {
            seen[s[left]] = false;
            left++;
        }
        seen[s[right]] = true;
        if (right - left + 1 > max_len) {
            max_len = right - left + 1;
        }
    }

    cout << max_len;
    return 0;
}