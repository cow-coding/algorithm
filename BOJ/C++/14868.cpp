#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include <string.h>
#include<queue>

using namespace std;

int munmung = -5000000;

bool check[2001][2001];

bool recheck[2001][2001];

int dx[4] = { -1,1,0,0 };//네방향
int dy[4] = { 0,0,-1,1 };//네방향

int p[2002*2002];


queue<pair<int, int>> Q;

int mergetmp = 0;

int cal(int x, int y) {
	return 2001 * x + y;
}


int find(int n) {
	if (p[n] < 0) return n;
	p[n] = find(p[n]);

	return p[n];
}

void merge(int a, int b){
	a = find(a);
	b = find(b);
	if (a == b) return;

	if (p[a] == munmung && p[b] == munmung) {
		mergetmp++;
	}

	//p[a] += p[b];
	if (p[a] < p[b]) {
		p[b] = a;
	}
	else {
		p[a] = b;
	}
}

int time = 0;

int main() {

	int N, K;

	memset(p,-1,sizeof(p));

	cin >> N >> K;


	for (int i = 0; i < K; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		Q.push({ x,y });

		//check[x][y] = true;
		p[cal(x, y)] = munmung;
	}


	while (Q.size() != 0) {

		int qsize = Q.size();
		for (int k = 0; k < qsize; k++){

			int x = Q.front().first;
			int y = Q.front().second;


			check[x][y] = true;

			Q.pop();

			for (int i = 0; i < 4; i++) {
				if ((x + dx[i]) > 0 && (y + dy[i]) > 0 && (x + dx[i]) <= N && (y + dy[i]) <= N) {

					if (!check[x + dx[i]][y + dy[i]]) {
						if (!recheck[x + dx[i]][y + dy[i]]) {
							Q.push({ x + dx[i] ,y + dy[i] });
							recheck[x + dx[i]][y + dy[i]] = true;
						}
					}

					else {//유니온 파인드 구현
						merge(cal(x, y), cal(x + dx[i], y + dy[i]));

						if (mergetmp == K - 1) {
							cout << time << endl;
							return 0;
						}
					}
				}
			}

			if (mergetmp == K - 1) {
				cout << time << endl;
				return 0;
			}

		}

		time++;
	}

}
