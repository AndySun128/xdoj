#include <cstdio>
#include <cmath>

int main() {
    int n,m,cn=1,cm=1,sn=1,sm=1;
    scanf("%d %d",&n,&m);
    for(int i=2;i<sqrt(n);i++) {
        if(n%i==0) {
            cn+=2;
            sn+=i+n/i;
        }
    }
    if(sqrt(n)==(int)sqrt(n)) {
        cn++;
        sn+=sqrt(n);
    }
    for(int i=2;i<sqrt(m);i++) {
        if(m%i==0) {
            cm+=2;
            sm+=i+m/i;
        }
    }
    if(sqrt(m)==(int)sqrt(m)) {
        cm++;
        sm+=sqrt(m);
    }
    printf("%s %d %d",sn==m&&sm==n?"yes":"no",cn,cm);
}