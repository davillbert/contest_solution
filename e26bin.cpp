#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
int N, K, s = 0;
cin >> N >> K;
vector<int> trees;

int t;
for (int i = 0; i < N; ++i)
{
    cin >> t;
    trees.push_back(t);
    s = s + t;
}
sort(begin(trees), end(trees));
int q = 1, A = s;

int f = 0, o = 1, i = 0;
for(int i = 0; i < N; ++i)
{
    f = f + trees[i]/q;
    if(i == N - 1)
    {
    if(f == K){ q = q + A; break;}
    else A = A / 2;
    i = 0;
    f = 0;
    }
}
cout << q << endl;
}
