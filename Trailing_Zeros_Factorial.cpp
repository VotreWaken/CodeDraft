#include <iostream>
#include <vector>

int Factorial(int n)
{
	if (n > 1)
	{
		return n * Factorial(n - 1);
	}

	else
	{
		return n;
	}
}

std::vector <int> integerToArray(int x)
{
	std::vector <int> resultArray;
	int res = Factorial(x);
	while (true)
	{
		resultArray.insert(resultArray.begin(), res % 10);
		res /= 10;
		if (res == 0)
			return resultArray;
	}
}

int calculateZeros(std::vector<int> Numbers)
{
	int res = 0;
	for (auto const& element : Numbers)
	{
		if (element == 0)
		{
			res++;
		}
		else
			res = 0;
	}
	return res;
}

long zeros(long n)
{
	int res = 0;
	std::vector <int> temp = integerToArray(n);
	res = calculateZeros(temp);
	return res;
}

int main()
{
	std::cout << zeros(12);
}


// Calculate trailing zeros of Factorial 
// Zeros(6) = 1 
// 6! = 1 * 2 * 3 * 4 * 5 * 6 = 720 -> 1 Trailing zero
// 12! = 479001600 --> 2 trailing zeros