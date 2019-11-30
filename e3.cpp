#include <iostream>
#include <math.h>

char base[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(void)
{
	long long N;
	unsigned system_base;
	std::cin >> N >> system_base;

	int max_power, power;
	max_power = power = floor(log(N)/log(system_base));

	char* answer = (char*)malloc(sizeof(char) * (power + 2));

	while(power != -1)
	{
		answer[max_power - power] = base[unsigned(N/pow(system_base, power))];
		N -= (N/(long long)(pow(system_base, power))) * pow(system_base, power);
		power--;
	}

	answer[max_power + 1] = 0;
	std::cout << answer;
}
