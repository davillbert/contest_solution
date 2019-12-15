#include <iostream>
using namespace std;
int main()
{
    long long N;
    int number = 0;

    cin >> N;
    int X = 0, Y = 0;

    while (Y * Y + X * X < N)
    {
        Y++;
        if (Y * Y + X * X >= N) 
        {
            X++;
            Y = 0;
        }
        number++;
    }

    cout << number << endl;
}
