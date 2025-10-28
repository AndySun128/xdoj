#include <fstream>
#include <iomanip>
#include <iostream>
using std::cin;
using std::cout;
using std::string;

struct student {
    int id;
    string name;
    double score[4];
    void in() {
        cin>>id;
        cin>>name;
        cin>>score[0];
        cin>>score[1];
        cin>>score[2];
        score[3]=(score[0]+score[1]+score[2])/3.0;

    }
    void out(){
        cout << id << " " << name << " "<<std::fixed<<std::setprecision(1)<<score[3]<<std::endl;
    }
};

int main() {
    int n;cin>>n;
    auto* a=new student[n];
    for (int i = 0; i < n; i++)a[i].in();
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j].score[3] > a[maxIndex].score[3]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            std::swap(a[i], a[maxIndex]);
        }
    }
    for (int i = 0; i < n; i++)a[i].out();
    delete []a;
    return 0;
}