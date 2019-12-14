#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long N, M, MOD;
    cin >> N >> M >> MOD;
    long long* a = (long long*)malloc(sizeof(long long) * (N));
    long long* S = (long long*)malloc(sizeof(long long) * (M));
    for (long long i = N; i >= 0; --i)
    {
        cin >> a[i];
    }
    for (long long j = 0; j < M; ++j)
    {
        S[j] = 0;
    }
    for (long long j = 0; j < M; ++j)
    {
        long long x;
        cin >> x;
        for (long long i = N; i > 0; --i)
        {
           S[j] =(S[j] * x + a[i]) % MOD;
        }
        S[j] = (S[j] * x + a[0]) % MOD ;
    //    S[j] = 0;
    }

    for (long long j = 0; j < M; ++j)
    {
        cout << S[j] << endl;
    }
  free(a);
    free(S);
    return 0;

}
