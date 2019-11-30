#include<iostream>

using namespace std;

int main()
{
        unsigned N = 0;

        cin >> N;


        unsigned *sequence = (unsigned*)malloc(sizeof(unsigned)*(2 * N));
        unsigned long long S=0;

        for(unsigned i = 0; i < 2 * N; ++i)
            {
                cin >> sequence[i];
            }
        unsigned swap = 0;
        for(unsigned i = 0; i < 2 * N; ++i)
            {
                for(unsigned j = 0; j < 2 * N; ++j)
                {
                    if(sequence[i] < sequence[j])
                    {
                        swap = sequence[i];
                        sequence[i] = sequence[j];
                        sequence[j] = swap;
                    }
                }
            }
        cout << endl;
        for (unsigned i = 0; i < 2 * N; ++i)
        {
            if(i % 2 == 0)
            {
            S = S + sequence[i];
            }
        }
cout << S % 1000000000;
        free(sequence);
}
