#include <iostream>
using namespace std;

int N, M;
int arr[9];
int ret[9];

void ans(int idx1, int idx2)
{
    if (idx2 == M) {
        for (int i = 0; i < M; i++) {
            cout << ret[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for (int i = idx1; i < N; i++) {
        ret[idx2] = arr[i];
        ans(i + 1, idx2 + 1);
    }
}

int main()
{
    cin >> N >> M;
    
    for (int i = 0; i < N; i++)
        arr[i] = i + 1;
    ans(0, 0);
}
