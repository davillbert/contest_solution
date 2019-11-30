#include<iostream>
using namespace std;
using ll = long long;


int main()
{
    ll bobr, voler;
    cin >> bobr >> voler;

    ll max_bobr = 0, min_bobr;
    if (bobr % voler == 0) min_bobr = 0;
    else min_bobr = 1;

    max_bobr = bobr - voler + 1;
    min_bobr = min_bobr + bobr / voler;

    cout << min_bobr << " " << max_bobr;
}
