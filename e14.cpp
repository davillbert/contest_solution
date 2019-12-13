#include <string.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
using ULL = unsigned long long;

int main()
{
    ULL rocks;
    cin >> rocks;
    ULL *winners = (ULL*)malloc(sizeof(ULL)*(rocks));
for(ULL i = 1; i <= rocks; ++i)
{
    winners[i] = 0;
}
    winners[1] = 1;
    winners[2] = 0;
    for( ULL i = 3; i <= rocks; ++i)
    {
        for(int j = i - int(sqrt(i)); j <= i - 1; ++j)
            if(winners[j] == 0){ winners[i] = 1; }
    }

    if(winners[rocks]) cout << "First" << endl;
    else cout<< "Second" << endl;
    free(winners);
}
