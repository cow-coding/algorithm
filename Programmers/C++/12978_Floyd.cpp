#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// typedef pair<int, int> P;
const int INF = 987654321;

int solution(int N, vector<vector<int>> road, int K) {
    int answer = 0;
    int dist[51][51] = {0, };
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dist[i][j] = i == j ? 0 : INF;
        }
    }
    
    for (int i = 0; i < road.size(); i++) {
        int s = road[i][0]-1;
        int e = road[i][1]-1;
        int c = road[i][2];
        
        if (dist[s][e] > c) {
            dist[s][e] = c;
            dist[e][s] = c;
        }
    }
    
    for (int k = 0; k < N; k++)
        for (int i = 0; i < N; i++) 
            for (int j = 0; j < N; j++) 
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
    
    for (int i = 0; i < N; i++) {
        if (dist[0][i] <= K) answer++;
    }
    
    return answer;
}