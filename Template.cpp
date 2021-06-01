#include <iostream>
#include <string>
using namespace std;

template <typename T1>
void print(T1 pr)
{
	cout << pr;
}

template <typename T1, typename ...ARG>
void print(T1 pr, ARG...arg)
{
	cout << pr << ' ';
	print(arg...);
}

template <typename T1>
double sum(T1 pr)
{
	pr += pr;
	return pr;
}

template <typename T1, typename ...ARG>
double sum(T1 pr, ARG...arg)
{
	pr += sum(arg...);
	return pr;
}

int main()
{
	print(5,6,7,"gfdsf");

	cout << endl;

	cout << sum(5, 6, 7, 8, 0);
}