#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    char map[100][100];
    int N;
    int sero{0}, garo{0};
    int seroc{0}, garoc{0};
    
    scanf("%d", &N);
    
    // map 형성
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            scanf("%1s", &map[i][j]);
        }
    
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j < N - 1) {
                if (map[j][i] == '.' && map[j + 1][i] == '.') {
                    seroc++; // 한개라도 발견되면 걍 탐색 종료
                } else if ((map[j][i] == '.' && map[j + 1][i] == 'X') || map[j][i] == 'X')
                    if (seroc > 0) {
                        sero++;
                        seroc = 0;
                    }
            } else {
                if (seroc > 0) {
                    sero++;
                    seroc = 0;
                }
            }
        }
    }
    
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j < N - 1) {
                if (map[i][j] == '.' && map[i][j + 1] == '.') {
                    garoc++; // 한개라도 발견되면 걍 탐색 종료
                } else if ((map[i][j] == '.' && map[i][j + 1] == 'X') || map[i][j] == 'X') {
                    if (garoc > 0) {
                        garo++;
                        garoc = 0;
                    }
                }
            } else {
                if (garoc > 0) {
                    garo++;
                    garoc = 0;
                }
            }
        }
    }
    
    printf("%d %d\n", garo, sero);
}

