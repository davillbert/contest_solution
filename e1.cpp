#include<iostream>
using namespace std;

using T = unsigned long long;

T fibbnorec(int N)
{ 
	T Fn=1, F1=1, F2=1;
	if ((N==1)||(N==2)) return 1;
	for(int i=0; i<N-2;i++)
	{
		Fn=F1+F2;
		F1=F2;
		F2=Fn;
	}
	return Fn;	
}


int main()
{
	T N;
	cin>>N;
	cout<<fibbnorec(N);
}
