

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//declare and initialize variables
	int value;
	char answer;
	

	int totalFifty = 50;
	int totalTwenty = 20;
	int totalFive = 5;
	int totalOne = 1;


	int fifty = 0, twenty = 0, five = 0, one = 0;

	do { //do-while loop 


		cout << "Please  enter an amount you would like to withdraw: ";//Prompt user for a value
		cin >> value;

		if (value > 300)
		{
			cout << "Error. You cannot withdraw an amount greater than 300.00 " << endl;//sends error message to user
		}

		else if (value < 1)
		{
				cout << "Error. You cannot withdraw an amount less than 1.00 " << endl;//sends error message to user
		}

		else

		{
		
			//the logic behind the 50/20/5/1 notes
			fifty = value / 50;
			if (fifty > totalFifty)
				fifty = totalFifty;
			value = value - fifty * 50;

			twenty = value / 20;
			if (twenty > totalTwenty)
				twenty = totalTwenty;
			value = value - twenty * 20;


			five = value / 5;
			if (five > totalFive)
				five = totalFive;
			value = value - 5 * 5;


			one = value / 1;
			if (one > totalOne)
				one = totalOne;
			value = value - 1 * 1;

				//the message to the user 
				cout << "Total 50 note: " << fifty << endl;
				cout << "Total 20 note: " << twenty << endl;
				cout << "Total 5 note: " << five << endl;
				cout << "Total 1 note: " << one << endl;

				cout << "Would you like to make another withdrawal? Enter Y to continue ";
				cin >> answer;
		}
	}

	while (value > 1 && value < 300 && answer == 'Y' || answer == 'y');//the do-while loop condition

    return 0;
}

