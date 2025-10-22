#include<iostream>
#include<string>
int main(){
    int stamp;
    scanf("%d",&stamp);
    printf("%02d:%02d:%02d ",(stamp / 60) / 60,(stamp / 60) % 60,stamp % 60);
    if (stamp > 43200){printf("pm");}else{printf("am");}
    return 0;
}
