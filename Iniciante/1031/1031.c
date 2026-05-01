#include <stdio.h>

int A[101][1001];

int s(int n, int k){
    if (A[n][k] == -1){
        A[n][k] = (s(n - 1, k) + k) % n;
    }
    return A[n][k];
}

int main(){
    int N, m;
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 1001; ++j){
            A[i][j] = 0;
        }
    }
    for (int i = 2; i < 101; ++i){
        for (int j = 0; j < 1001; ++j){
            A[i][j] = -1;
        }
    }

    while (scanf("%d", &N) != EOF){
        if (N == 0){
            break;
        }
        m = 1;
        while ((s(N - 1, m) + 1) % N != 12){
        ++m;
        }
        printf("%d\n", m);
    }

    return 0;
}