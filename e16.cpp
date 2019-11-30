#include<iostream>

using namespace std;
using ULL = unsigned long long;

int main()
{
    ULL N, sum = 0, S = 0;
    cin >> N;

    ULL *A = (ULL*)malloc(sizeof(ULL)*N);

    for (ULL i = 0; i < N; ++i)
    {
        cin>>A[i];
        sum = sum + A[i];
    }

    cout << endl;

    if ((A[0] == 1) && (A[1] - A[0] < 2))
    {
        for (ULL i = 0; i < N; ++i)
    {
        S = S + A[i];
       // cout << S << " " << A[i];
        if (S > A[i+1])
        {
               S = S - A[i];
        }
    }
    cout << sum+1;
    }
    if (A[0] != 1) cout << 1;
    if ((A[0] == 1) && (A[1] - A[0] > 1)) cout << 2;
}
