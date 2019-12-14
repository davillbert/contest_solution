#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N, M, MOD;
    cin >> N >> M >> MOD;
    int* a = (int*)malloc(sizeof(int) * (N));
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
        for (int i = N; i > 1; --i)
        {
           S[j] =((S[j] + a[i] * x) * x) % MOD;
        }
        cout << (S[j] + a[0]) % MOD << endl;
    //    S[j] = 0;
    }
}

