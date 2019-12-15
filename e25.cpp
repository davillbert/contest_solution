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
        while (Y * Y + X * X >= N)
        {
            Y--;
         //   Y = 0;

        }
           number = number + Y + 1;
    }

    cout << number << endl;
}

