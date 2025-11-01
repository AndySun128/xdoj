#include <cmath>
#include <cstdio>

int main() {
    float a,x,px;scanf("%f",&a);
    x=a/2;
    while (std::fabs(x-px)>=1e-5) {px=x;x=(x+a/x)/2;}
    printf("%.5f",x);
}
