#include <iostream>

using namespace std;

unsigned long long sqrt_search(unsigned long long y)
{
    unsigned long long sqrt = y;
    unsigned long long A = y;
    if (y <= 0)
        return 0;
    while (1)
    {
        A = (y / A + A) / 2;
        if (sqrt > A)
            sqrt = A;
        else
            return sqrt;
    }
}

int main()
{
    unsigned long long a;
    cin >> a;
    cout << sqrt_search(a);
}
