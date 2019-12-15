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
    for (int i = 0; i < N; ++i) {
        cin >> t;
        trees.push_back(t);
        s = s + t;
    }
    sort(begin(trees), end(trees));
    int q = s / K;
    int f = 0, o = 1, i = 0;
    while (o != 0) {
        o = trees[i] / q;
        f = f + o;
        ++i;
        if (o == 0) {
            if (f == K) {
                // cout << q;
                break;
            }
            if (f != s) {
                --q;
                o = 1;
            }
        }
    }
    cout << q << endl;
}
