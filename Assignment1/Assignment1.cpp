#include "stdafx.h";
#include <iostream>
using namespace std;


int main()
{
	int amount = 0; /*declare the "amount" variable and set it equal to 0, the starting point
					for variable "amount"*/

	while (true) //the while loop that runs if the condition is true
	{
		cout << "Enter a withdrawal amount" << endl;//prompts user for the input
		cin >> amount; //enables the user to enter the amount, the amount that is entered overrides the 0

		if (amount != 0)//first IF condition, if the amount that is entered is NOT 0
		{
			if (amount > 1 && amount < 300)/*the second IF condition, the amount entered must be
										   greated than one AND less than 300.*/
			{
				//declare and initialize arrays
				int bills[] = { 50,20,10,5,1 };//array of the required denominations
				int counts[] = { 0,0,0,0,0 };//the amount of each note before the increment

				while (amount > 0)//condition that refers to the amount that is left over after incrementing the array
				{
					for (int i = 0; i < 5; i++)//FOR loop array conditions
					{
						if (bills[i] <= amount)
						{
							counts[i]++;//increment the note 
							amount -= bills[i];//subtract note from amount
							break; //exits the FOR loop
						}
					}
				}

				//output

				for (int i = 0; i < 5; i++)
				{
					if (counts[i] > 0)//if note is greater than 0, output the following statement.
					{
						cout << counts[i] << " " << bills[i] << " bills" << endl;
					}
				}


			}

			else /*if the amount entered does not satisfy the corresponding IF and its condition, execute
				 the following statement:*/
			{
				cout << "Error, cannot withdraw this amount " << endl;
			}


		}

		else /*the statement that essentially says that the amount the user entered IS 0 and
			 according to the assignment, if the user enters 0, the program must quit or break.
			 This is the exit condition. :) */
		{
			break;//exits the program after user inputs 0
		}


	}
	return 0;
}

