#include <iostream>

int reverseNumber(int);

int main()
{
	int n;
	std::cout << "enter a number" << std::endl;
	std::cin >> n;
	int result = reverseNumber(n);
	std::cout << "reverse number" << std::endl;
	std::cout << result << std::endl;
}

int reverseNumber(int n) {
	int reverse = 0;
	int	res;
	while (n != 0)
	{
		res = n % 10;
		reverse = reverse * 10 + res;
		n = n / 10;
	}

	return reverse;
}