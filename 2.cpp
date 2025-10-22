#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int prev, current;
    cin >> prev;
    int count = 1;

    for (int i = 1; i < n; i++) {
        cin >> current;
        if (current != prev) {
            count++;
            prev = current;
        }
    }

    cout << count;
    return 0;
}