#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int s[3], e[3], r[3];
    
    scanf("%d:%d:%d", &s[0], &s[1], &s[2]);
    scanf("%d:%d:%d", &e[0], &e[1], &e[2]);
    
    if (e[2] >= s[2])
        r[2] = e[2] - s[2];
    else {
        r[2] = 60 + e[2] - s[2];
        e[1]--;
    }
    
    if (e[1] >= s[1])
        r[1] = e[1] - s[1];
    else {
        r[1] = 60 + e[1] - s[1];
        e[0]--;
    }
    
    if (e[0] >= s[0])
        r[0] = e[0] - s[0];
    else {
        r[0] = 24 + e[0] - s[0];
    }
    
    if (r[0] == 0 && r[1] == 0 && r[2] == 0)
        r[0] = 24;
    
    printf("%02d:%02d:%02d", r[0],r[1],r[2]);
}
