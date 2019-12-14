#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N, M, MOD;
    cin >> N >> M >> MOD;
    int* a = (int*)malloc(sizeof(int) * (N + 1));
    int* S = (int*)malloc(sizeof(int) * (M));
    for (int i = N; i >= 0; --i)
    {
        cin >> a[i];
    }
    for (int j = 0; j < M; ++j)
    {
        S[j] = 0;
    }
    for (int j = 0; j < M; ++j)
    {
        int x;
        cin >> x;
        for (int i = 0; i < N; ++i)
        {
           S[j] =(S[j] * x + a[i]) % MOD;
        }
        cout << (S[j] * x + a[N]) % MOD << endl;
    //    S[j] = 0;
    }
}
