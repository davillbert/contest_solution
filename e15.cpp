#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N, M, MOD;
    cin >> N >> M >> MOD;
    int* a = (int*)malloc(sizeof(int) * (N));
    int* S = (int*)malloc(sizeof(int) * (M));
    for (int i = 0; i < N + 1; ++i)
    {
        cin >> a[i];
    }
    for (int j = 0; j < M; ++j)
    {
        S[j] = 0;
    }


    for (int j = 0; j < M; ++j)
    {
        cin >> x;
        for (int i = 2; i < N + 1; ++i)
        {
           S[j] = ((S[j] + a[i] * x + a[i - 1]) * x) % MOD;
        }
        cout << (S + a[0]) % MOD << endl;
    }
}
