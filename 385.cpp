#include <iostream>

using namespace std;

bool containsSevenMath(int num) {
    num = abs(num);
    while (num > 0) {
        if (num % 10 == 7) return true;
        num /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int current_num = 1;
    int current_player = 0; 
    int skip_count[3] = {0, 0, 0};
    int valid_count = 0;

    while (valid_count < n) {
        if (current_num % 7 == 0 || containsSevenMath(current_num)) {
            skip_count[current_player]++;
        } else {
            valid_count++;
        }
        current_player = (current_player + 1) % 3;
        current_num++;
    }

    cout << skip_count[0] << " " << skip_count[1] << " " << skip_count[2] << endl;

    return 0;
}