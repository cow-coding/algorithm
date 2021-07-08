#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct point {
    int x, y;
    
    point(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

bool cmp(point& a, point& b) {
    if (a.y == b.y) {
        return a.x < b.x;
    }else {
        return a.y < b.y;
    }
}

int main() {
    int N;
    vector<point> p;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        
        cin >> x >> y;
        
        p.push_back(point(x, y));
    }
    
    sort(p.begin(), p.end(), cmp);
    
    for (int i = 0; i < p.size(); i++) {
        cout << p[i].x << " " << p[i].y << "\n";
    }
}
