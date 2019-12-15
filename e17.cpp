#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

//int cmp_func(const void *p1, const void *p2)
//{
//  return *(double *)p1 - *(double *)p2;
//}
int main()
{
    int N;
    cin >> N;
    //  double* coord = (double*)malloc(sizeof(double) * N);
    vector<double> coord;
    double c;
    for (int i = 0; i < N; ++i) {
        cin >> c;
        coord.push_back(c);
    }
    cout << endl;
    sort(begin(coord), end(coord));
    //  for (int i = 0; i < N; ++i)
    //{
    //  cout << coord[i] << " ";
    //}

    int I = 0, J = 1, num = N;
    while (J < N) {
        if (coord[J] - coord[I] <= 1)
            num = num - 1;
        else
            I = J;
        J++;
    }
    cout << num << endl;
    // free(coord);
}
