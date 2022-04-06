#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Euclid(int a, int b)
{
	if (a > b)
	{
		swap(a, b);
	}

	if (b % a != 0)
	{
		Euclid(a, b - a);
	}
	else
	{
		std::cout << "GCD is: " << a;
	}
}

int main()
{
    int a, b;
    std::cout << "Enter two integers to find their GCD \n";
    std::cin >> a >> b;

	Euclid(a, b);
}
