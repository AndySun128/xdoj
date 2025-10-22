#include<iostream>
#include<string>

using namespace std;

string bubble(string s) {
    string::value_type t;
    for (int i=0;i<s.length();i++) {
        for (int j=0; j<s.length()-i-1; j++) {
            if (s[j]>s[j+1]) {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    return s;
}

int main(){
    string s,r1,r2;
    int index1=0;
    int index2=0;
    cin >> s;
    for(int i=1;i<s.length();i++) {
        if(s[i]>s[0]){
            r1+=s[i];
        }else if(s[i]<s[0]|s[i]==s[0]){
            r2+=s[i];
        }
    }

    cout<<r1<<s[0]<<bubble(r2);
    return 0;
}

