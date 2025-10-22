#include <iomanip>
#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
    float h,m;
    scanf("%f %f",&h,&m);
    h = h + m/60;
    h = 4*h*h/(h+2)-20;
    printf("%.2f",h);
}

