/******************************
Learn C++ by Making Games
Project 4.1 - Game of Funny Headlines
******************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//First let's welcome the user
	int x;
	
	cout << "Welcome to the C++ News Network!" << endl << endl;
	
	cout << "Which type of news would you like to hear from 1 being the most serious to 4 being the most silly." << endl;
	cin >> x;
	
	/*Then lets input several values to plug into our headlines.
	  Note that the questions don't always alwats match with the names of the
	  variables because we are trying to surprise the player.*/
	string userName;
	cout << "Please type in your first name: " << endl;
	cin >> userName;

	cout << "-----------------------------------------" << endl << endl;

	int smallNumber;
	cout << "How many siblings do you have?" << endl;
	cin >> smallNumber;

	cout << "-----------------------------------------" << endl << endl;

	float largeNumber;
	cout << "How much money would you like to earn every year?" << endl;
	cin >> largeNumber;

	cout << "-----------------------------------------" << endl << endl;

	string color;
	cout << "Tell us your least favourite color: " << endl;
	cin >> color;
	cin.sync(); //The cin line above does not remove the end of line character
	//from the least favorite color question

	cout << "-----------------------------------------" << endl << endl;

	string amorphousObject;
	cout << "which vegetables have the wierdest shapes?" << endl;
	getline(cin, amorphousObject, '\n');
	cin.sync();

	cout << "-----------------------------------------" << endl << endl;

	string deadGuy;
	cout << "Name a famous dead person: " << endl;
	getline(cin, deadGuy, '\n');
	cin.sync();

	cout << "-----------------------------------------" << endl << endl;

	string celebrityActor;
	cout << "Who is your favourite actor?" << endl;
	getline(cin, celebrityActor, '\n');
	cin.sync();

	cout << "-----------------------------------------" << endl << endl;

	string politician;
	cout << "Name a current world leader: " << endl;
	getline(cin, politician, '\n');
	cin.sync();

	cout << "-----------------------------------------" << endl << endl;

	string cartoonCharacter;
	cout << "Who is your favourite cartoon character?" << endl;
	getline(cin, cartoonCharacter);
	cin.sync();

	cout << "-----------------------------------------" << endl << endl;

	string wierdGroup;
	cout << "Name a hobby or a profession you find scary: " << endl;
	getline(cin, wierdGroup);
	cin.sync();

	cout << "-----------------------------------------" << endl << endl;

	string somethingGross;
	cout << "Name a food item you detested as a child: " << endl;
	getline(cin, somethingGross);
	cin.sync();

	cout << "-----------------------------------------" << endl << endl;


	//Finally, let's print out the headlines
	
	cout << endl << endl << endl
		<< "And now, today's headlines from the C++ News Wire:"
		<< endl;
	cout << "----------------------------------------------------"
		<< endl;

	if (x == 2)
	{
		cout << "ALIENS SHAPED LIKE " << color << " " << amorphousObject
			<< " INVADE THE EARTH, KIDNAP " << celebrityActor << ","
			<< "RESURRECT " << deadGuy << "!" << endl << endl;
	}
	
	if (x == 1)
	{
		cout << userName
			<< " RELEASES NEW ALBUM! " << smallNumber
			<< " COPIES EXPECTED TO BE SOLD!"
			<< endl << endl;
	}

	if (x == 4)
	{
		cout << politician << " CAUGHT IN LOVE TRIANGLE WITH "
			<< cartoonCharacter << " AND SECRET "
			<< wierdGroup << " CULT LEADER!" << endl << endl;
	}

	if (x == 3)
	{
		cout << "WORLD'S LARGEST BABY BORN - WEIGHS " << largeNumber
			<< " POUNDS, EATS " << smallNumber << " TONS OF "
			<< somethingGross << " EVERY DAY!" << endl << endl;
	}

	//And we're done!
	system("pause");
	return 0;
}
