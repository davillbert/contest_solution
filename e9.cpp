#include <iostream>
#include <stdlib.h>
#include<math.h>
using namespace std;

struct point_position {
    double x;
    double y;
};

double square(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double ax = x2 - x1;
    double ay = y2 - y1;
    double bx = x3 - x1;
    double by = y3 - y1;
    return abs((ax * by - ay * bx) * 0.5);
}

int main()
{
    int N;
    cin >> N;
    struct point_position* point = (struct point_position*)malloc(sizeof(struct point_position) * N);
    float S = 10000000000., l = 0.;
    //printf("%.6f", S);

        for (int i = 0; i < N; i++)
        {
            cin >> point[i].x >> point[i].y;
        }
        for(int i = 0; i < N - 2; ++i)
        {
            for(int j = i + 1; j < N - 1; ++j)
            {
                for(int k = j + 1; k < N; ++k)
                {
                    l = square(point[i].x, point[i].y, point[j].x, point[j].y, point[k].x,point[k].y);
                   // cout << l << endl;
                    if(l < S)

                      { S = l;}
                    //cout << S << endl;
                }
            }
        }
        printf("%.6f", S);
}
