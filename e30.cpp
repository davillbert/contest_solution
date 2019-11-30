#include <iostream>
#include <inttypes.h>
using namespace std;

using ULL = unsigned long long;
//sing ULL = intmax_t;
ULL elementus[68][68];


ULL C(ULL n, ULL k)
{

   // ULL** elementus = (ULL**)malloc(n * sizeof(ULL));
   // for(ULL i = 0; i < n; ++i) elementus[i] = (ULL*)malloc(k*sizeof(ULL));

   // for(int i = 0; i < 68; ++i)
    //{
      //  for(int j  = 0; j < 68; ++j)
        //{
          //  elementus[i][j] = 0;
        //}
    //}
 if(elementus[n][k]) return elementus[n][k];
    if(n == k) elementus[n][k] = 1;// return elementus[n][k];}
    if(k == 0) elementus[n][k] = 1;//;return elementus[n][k];}
    if(k == 1) elementus[n][k] = n;//;return elementus[n][k];}
    if((n != k) && (k >= 1) && (n >= 1)) elementus[n][k] = C(n - 1, k - 1) + C(n - 1, k);

    return elementus[n][k];
}

int main()
{
    ULL N, K;
    cin >> N >> K;
    for(int i = 0; i < 68; ++i)
        {
            for(int j  = 0; j < 68; ++j)
            {
                elementus[i][j] = 0;
            }
        }

    cout << C(N, K);
}
