#include <iostream>
#include <math.h>
using namespace std;
struct hours_minutes
{

    int shours1;
    char szalupa;
    int sminutes;
    int ehours00;

    char ezalupa;
    int eminutes;

};

int main()
{
int time[1440];
for(int i = 0; i < 1440; ++i) time[i] = 0;
int visitors, start, end, M = 0;
cin >> visitors;
struct hours_minutes *visit_time = (struct hours_minutes*)malloc(sizeof(struct hours_minutes) * (visitors));
for(int j = 0; j < visitors; ++j)
{
    cin >>  visit_time->shours1 >> visit_time->szalupa>> visit_time->sminutes>> visit_time->ehours00 >> visit_time->ezalupa >> visit_time->eminutes;
 //  cout << visit_time->shours1 <<visit_time->szalupa<< visit_time->sminutes<< visit_time->ehours00 << visit_time->ezalupa << visit_time->eminutes;
    start = (visit_time->shours1) * 60 + visit_time->sminutes;
    end = (visit_time->ehours00) * 60 + visit_time->eminutes;
    for(int i = start; i < end + 1; ++i) time[i] = time[i] + 1;
}
for(int i = 0; i < 1439; ++i)
{
    if(time[i] > M) M = time[i];
}
    cout << M << endl;
}
