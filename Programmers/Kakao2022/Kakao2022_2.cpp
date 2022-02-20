#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

bool isPrime(ll num) {
    if (num == 1) return false;
    if (num == 2) return true;
    
    ll lim = sqrt(num);
    
    for (ll i = 2; i <= lim; i++) {
        if (num % i == 0) return false;
    }
    
    return true;
}

string changeNumber(int num, int k) {
    string ret = "";
    int rem = 0;
    
    while(num != 0) {
        rem = num % k;
        num /= k;
        
        ret += to_string(rem);
    }
    
    reverse(ret.begin(), ret.end());
    
    return ret;
}

int solution(int n, int k) {
    int answer = 0;
    string number = "";
    
    if (k == 10) number = to_string(n);
    else number = changeNumber(n, k);
    
    string tmp = "";
    char curr = '\0';
    
    for (int i = 0; i < number.size(); i++) {
        curr = number[i];
        
        if (curr == '0') {
            if (tmp == "") continue;
            if (isPrime(stoll(tmp))) answer++;
            
            tmp = "";
        }else tmp += curr;

    }
    
    if (tmp != "") {
        if (isPrime(stoll(tmp))) answer++;
    }
    
    return answer;
}