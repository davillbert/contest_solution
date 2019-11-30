#include <iostream>
#include <stdlib.h>
#include<math.h>

#define myabs(a) (a<0?-a:a)

using namespace std;

struct point_position {
    int point;
    int position;
};

int cmp_func(const void *p1, const void *p2)
{
    return (*(struct point_position*)p1).point - (*(struct point_position*)p2).point;
}

int main()
{
    int N, I = 0, J = 0;
    cin >> N;

    struct point_position* A = (struct point_position*)malloc(sizeof(struct point_position) * N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].point;
        A[i].position = i;
    }
qsort(A, N, sizeof(long long), cmp_func);
  //cout << A[N - 2].point << " " << A[N - 1].point << endl;

    int mIn = 1000000000;
    //cout << mIn;
    for (int i = 0; i < N - 1; i++)
    {
      //  cout << myabs(A[i + 1].point - A[i].point) << "jopa" << endl;
        if (myabs(A[i + 1].point - A[i].point) < mIn)
        {
            mIn = myabs(A[i + 1].point - A[i].point);
         //   cout << mIn;
            I = A[i].position + 1;
            J = A[i + 1].position + 1;
          //  cout << I << J << " jojo " << endl;
        }
    }

    cout << mIn << endl;
    cout << min(I, J) << " " << max(I, J) << endl;
    free(A);
}
