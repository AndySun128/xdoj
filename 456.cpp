#include <iostream>
#include <cstdio>
int main() {
    int n;std::cin>>n;
    int id[n],max_i=0,min_i=0;float score[n],max=-1,min=101,sum=0;
    for(int i=0;i<n;i++) {
        std::cin>>id[i]>>score[i];
        if(score[i]>max) {max=score[i];max_i=i;}
        if(score[i]<min) {min=score[i];min_i=i;}
        sum+=score[i];
    }
    std::printf("%.2f %d\n",score[max_i],id[max_i]);
    std::printf("%.2f %d\n",score[min_i],id[min_i]);
    std::printf("%.2f %.2f\n",sum,sum/static_cast<float>(n));
}