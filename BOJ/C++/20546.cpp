#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

const int MAX = 1000000010;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int money;
    int day[15];
    
    cin >> money;
    
    int j = money, s = money;
    
    // stock setting
    for (int i = 0; i < 14; i++) cin >> day[i];
    
    int curr = day[0];
    bool buy = false; // s 매수 타이밍 체크
    bool sell = false;
    int jcount = 0;
    int scount = 0;
    
    if (j >= curr) {
        int today = j / curr;
        jcount += today; // 준현 주식
        j -= curr * today;
    }
    
    int threeup = 0;
    int threedown = 0;
    
    for (int i = 1; i < 14; i++) {
        if (j >= day[i]) {
            int today = j / day[i];
            jcount += today;
            j -= day[i] * today;
        }
        
        if (curr < day[i]) {
            // 전날 대비 상승
            threedown = 0;
            threeup++;
        }else if (curr == day[i]) {
            // 전날과 동일하면 올 초기화
            threeup = 0;
            threedown = 0;
        }else if (curr > day[i]) {
            threeup = 0;
            threedown++;
        }
        
        if (threeup >= 3) {
            // 매도 타이밍
            s += scount * day[i];
            scount = 0;
        }
        
        if (threedown >= 3) {
            if (s >= day[i]) {
                int today = s / day[i];
                scount += today;
                
                s -= day[i] * today;
            }
            
        }
        
        curr = day[i];
    }
    
    int jresult = j + (jcount * day[13]);
    int sresult = s + (scount * day[13]);
    
    if (jresult > sresult) {
        cout  << "BNP\n";
    }else if (jresult < sresult) {
        cout << "TIMING\n";
    }else {
        cout << "SAMESAME\n";
    }
}

