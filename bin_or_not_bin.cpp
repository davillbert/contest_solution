#include <iostream>

using namespace std;
using ULL = unsigned long long;

ULL SQRT(ULL y)
{
    ULL SQ = y;
    ULL A = y;
    if (y <= 0)
        return 0;
    while (1)
    {
        A = (y / A + A) / 2;
        if (SQ > A)
            SQ = A;
        else
            return SQ;
    }
}

int main()
{
    ULL a;
    cin >> a;
    cout << SQRT(a);
}
