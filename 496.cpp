#include <iostream>
#define MAX_SIZE 10

typedef struct{
    int height;
    int width;
    int image[MAX_SIZE][MAX_SIZE];
}bitmap;

bitmap bitmap_input() {
    bitmap a;
    std::cin>>a.width>>a.height;
    for (int i=0;i<a.height;i++) {
        for (int j=0;j<a.width;j++) {
            std::cin>>a.image[i][j];
        }
    }
    return a;
}

bitmap rotate(bitmap pre) {
    bitmap post;
    post.width=pre.height;
    post.height=pre.width;
    for (int i=0;i<post.height;i++) {
        for (int j=0;j<post.width;j++) {
            post.image[i][j]=pre.image[post.width-j-1][i];
        }
    }
    return post;
}
void bitmap_output(bitmap a) {
    std::cout<<a.width<<" "<<a.height<<std::endl;
    for (int i=0;i<a.height;i++) {
        for (int j=0;j<a.width;j++) {
            std::cout<<a.image[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
}

int main() {
    bitmap a=bitmap_input();
    int n;std::cin>>n;
    for (int i=0;i<n/90;i++)a=rotate(a);
    bitmap_output(a);
    return 0;
}
