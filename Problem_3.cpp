#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	cout << "THE REVERSE ARRAY PROGRAM!\n\n\n";
	
	char arr[50];
	int size;
	
	cout << "Enter your input array:\n";
	cin>> arr;
	
	size =0;
	
	while(arr[size] !='\0')
	size++;
		
	cout << "\nYour reverse array is:\n";
	
	for(int j = size - 1; j >= 0 ; j--)
	{
		cout << arr[j];
	}
	
	cout<< "\n\nThe size of your array is:"<< size;
	
	getch();
	return 0;
}
