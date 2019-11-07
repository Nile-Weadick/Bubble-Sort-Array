// BubbleSortSearch.cpp : Defines the entry point for the console application.
// Nile Weadick
// Bubble sort array

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "fstream"
#include "cstdlib"
#include "ctime"

using namespace std;

int main()
{
	bool found = false; // Flag to indicate if the value was found
	int position; // To record position of search value
	int index = -1; // Used as a subscript to search array
	int value = -1; // Value entered by user
	int hold; // temporally holds value
	int swap; // used to move value to next index spot

	const int arraySize = 5;
	int arrayNum[arraySize] = {0};
	srand(unsigned(time(0)));

	for(int i = 0; i < arraySize; i++)
	{
		arrayNum[i] = rand() % 25 + 1;
	}

	while(1)
	{
		swap = 0;

		for(int i = 0; i < arraySize - 1; i++)
		{
			if(arrayNum[i] > arrayNum[i +1])
			{
				int hold = arrayNum[i];
				arrayNum[i] = arrayNum[i + 1];
				arrayNum[i + 1] = hold;
				swap = 1;
			}
		}
		if (swap == 0)
			{
				break;
		}
	}
		printf("Numbers\n");
		for(int i = 0; i < arraySize; i++)
		{
			cout << arrayNum[i] << endl;
		}

		cout << "Enter value you wish to search for in array :";
		cin >> value;

		//Linear serach

		for(index = 0; index < arraySize; index++)
		{
			if(value == arrayNum[index])
			{
				found = true; // Set the flag
				cout << "Value found at index [" << index << "]" << endl;
				break;
			}
		}

		if(!found) cout << "Value " << value << " is not strored in this array" << endl;


	string junk;
	cout << "Hit any key to continue...";
	cin >> junk;
	return (0);
}




