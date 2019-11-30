#include <iostream>
#include <vector>
#include <math.h>
using LL = long long;
using namespace std;

struct num_count
{
    LL number;
    int count;
};


int main()
{
    int N1, N2;
    cin >> N1 >> N2;
  //  LL* numbers1 = (LL*)malloc(sizeof(LL) * (N1));
   // vector<struct num_count> nc1;

    LL* numbers1 = (LL*)malloc(sizeof(LL) * (N1));
   // vector<struct num_count> nc1;
    LL* numbers2 = (LL*)malloc(sizeof(LL) * (N2));
   // vector<struct num_count> nc2;

    int count = 0;

    for (int i = 0; i < N1; ++i)
    {
        cin >> numbers1[i];

    }
   // MAX = numbers1[0];

    for(int i = 0; i < N2; ++i)
    {
        cin >> numbers2[i];
    }

    int i = 0, j = 0;

    while((i < N1) && (j < N2))
    {
        if(numbers1[i] < numbers2[j]) i++;
        if(numbers1[i] > numbers2[j]) j++;

        if (((i < N1) && (j < N2))  && (numbers1[i] == numbers2[j]))
                {
                    i = i + 1;
                    j = j + 1;
                    count = count + 1;
                }

    }
 cout << count;
}
