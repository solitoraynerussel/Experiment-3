#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numbers[10];
	int smallest;
	int largest;	
	double sum;
	
	cout << "Smallest, Largest, Total, and Mean Calculator!\n";
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> numbers[i];
	}
	cout << endl;
	
	largest = numbers[0];
	for(int i = 1; i < 10; i++)
	{
		if(largest < numbers[i])
		largest = numbers[i];
	}
	
	smallest = numbers[0];
	for(int i = 1; i < 10; i++)
	{
		if(smallest > numbers[i])
		smallest = numbers[i];
	}
	
	for(int i = 0; i < 10; i++)
	{
		sum = sum + numbers[i];
	}
	
	cout << "Smallest Integer = " << smallest << endl;
	cout << "Largest Integer = " << largest << endl;
	cout << "Total of the numbers = " << sum << endl;
	cout << "Average of the numbers = " << sum/10 <<endl;
	getch();
	return 0;
}
