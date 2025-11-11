#include<iostream>

typedef struct {
    int data[16][16];
}bitmap;

bitmap input() {
    bitmap a;
    for(int i=0;i<16;i++) {
        for(int j=0;j<16;j++) {
            std::cin>>a.data[i][j];
        }
    }
    return a;
}

void output(bitmap a) {
    for(int i=0;i<16;i++) {
        for(int j=0;j<16;j++) {
            std::cout<<a.data[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

bitmap median_filter(bitmap a) {
    bitmap b;
    for(int i=0;i<16;i++) {
        b.data[0][i]=a.data[0][i];
        b.data[15][i]=a.data[15][i];
        b.data[i][0]=a.data[i][0];
        b.data[i][15]=a.data[i][15];
    }
    for(int i=1;i<15;i++) {
        for(int j=1;j<15;j++) {
            int temp[9]={a.data[i-1][j-1],a.data[i][j-1],a.data[i+1][j-1],a.data[i-1][j],a.data[i][j],a.data[i+1][j],a.data[i-1][j+1],a.data[i][j+1],a.data[i+1][j+1]};
            for (int k = 0; k < 9; k++) {
                for (int l = 0; l < 8-k; l++) {
                    if (temp[l] < temp[l+1]) {
                        std::swap(temp[l],temp[l+1]);
                    }
                }
            }
            b.data[i][j]=temp[4];
        }
    }
    return b;
}

int main() {
    bitmap a=input();
    output(median_filter(a));
}