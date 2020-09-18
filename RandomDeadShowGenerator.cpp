/** RandomDeadShowGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
** @Creator Kobi Ederi
** Start on 4/7/20
** 1.0
*/

#include <iostream>
#include <ctime>
#include <string>
#include<stdlib.h>
#include<fstream>
#include <vector>
using namespace std;

//Method that needs to loop through the file in a quick and efficient manner and check if the given "YEAR-MONTH-DATE" is in the file
//if xx then no date given
string findRandomDate()
{
	string line = "";
	vector<string> lines;
	//Set random time
	srand(time(0));
	ifstream file("deadshows.txt");
	int numLines = 0;
	while (getline(file, line))
	{
		numLines++;
		lines.push_back(line);
	}
	
	int randNum = rand() % numLines - 1;
	return lines[randNum];
}
void printStealie()
{
	cout << endl;
	cout << "        FARE THEE WELL!!!!!!!!!!       " << endl;
	cout << "          .,;;##########::,." << endl;
	cout << "       .;##''       ,/|  ``##;." << endl;
	cout << "     .;#'         ,/##|__    `#;." << endl;
	cout << "   .;#'          /######/'     `#;." << endl;
	cout << "  ;#'             ,/##/__        `#;" << endl;
	cout << " ;#'            ,/######/'        `#;" << endl;
	cout << ";#'            /######/'           `#;" << endl;
	cout << ";#'             ,/##/___           `#;" << endl;
	cout << ";#            ,/#######/'           #;" << endl;
	cout << ";#           /#######/'             #;" << endl;
	cout << ";#             ,/##/__              #;" << endl;
	cout << "`#;          ,/######/'            ;#'" << endl;
	cout << "`#;.        /######/'             ,;#'" << endl;
	cout << " `#;.        ,/##/__             ,;#'" << endl;
	cout << "  `#;.      /######/'           ,;#'" << endl;
	cout << "    ##;_      |##/'           _;##" << endl;
	cout << "    :#`-;#;...|/'       ...;#;-'#:" << endl;
	cout << "    :`__ `-#### __  __ ####-' __':" << endl;
	cout << "    :  ``------.. `' ..------''  :" << endl;
	cout << "    `.. `--------`..'--------' ..'" << endl;
	cout << "      :                        :" << endl;
	cout << "      `:..      /:  :\      ..:'" << endl;
	cout << "         `.     ::  ::     .'" << endl;
	cout << "          #.              .#" << endl;
	cout << "          `'##;##;##;##;##`'" << endl;
	cout << "            `' `' `' `' `'" << endl;
}

int main()
{
	char input;
	char in;
    cout << "Welcome to the Random Grateful Dead Show Generator\n";

	//This plants a seed so that the random generation will be different on each run
	srand(time(0));

	while (true)
	{
		cout << "Would you like to generate a date (Y/N)? ";
		cin >> input;
		if (input == 'Y')
		{
			string date;
			cout << "Generate a Random Date: ";
			date = findRandomDate();
			cout << date;
			cout << endl;
			
			cout << "Would you like to try again(Y/N)? ";
			cin >> in;
			if (in == 'Y')
				continue;
			else {
				printStealie();
				exit(0);
			}
		}
		else if (input == 'N')
		{
			printStealie();
			exit(0);
		}
		else
		{
			cout << "Give a Real Answer You Dumb Bitch\n";
		}
	}

}


