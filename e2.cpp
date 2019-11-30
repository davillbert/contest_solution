#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
	long long X;
	cin>>X;
	float *vect=(float*)malloc(sizeof(float)*(2*X)), scal=0;
	for(int i=0; i<2*X; i++) cin>>vect[i];
	for(int i=0; i<X; i++) scal=scal+vect[i]*vect[i+X];
	printf("%.4f", scal);
}
