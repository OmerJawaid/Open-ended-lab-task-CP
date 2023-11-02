#include<iostream>
using namespace std;
int main()
{
	int selection;
	cout << "if you want to find prime numbers in a given range enter (1)"<<endl;
	cout << "if you wanmt to check if a specific number is prime enter (2)"<<endl;
	cin >> selection;
	if (selection == 1)
	{
		int limit,cont=0,n;
		cout << "enter the range limit";
		cin >> limit;
		for (int i = 1; i <= limit; i++)
		{
			for (int j = 1; j < i; j++)
			{
				if (i % j == 0)
				{
					cont++;
				}
			}
			if (cont == 1)
			{
				cout << i<<" ";
				cont = 0;
			}
			cont = 0;
		}
	}
	else if (selection == 2)
	{
		int number,cont=0;
		cout << "input the number: ";
		cin >> number;

		for (int i = 1; i < number; i++)
		{
			if (number % i == 0)
				cont++;
		}
		
		if (cont == 1)
			cout << "it is a prime number.";
		else
			cout << "it is not a prime number.";	
	}
	else
		cout << "enter valid number.";
}