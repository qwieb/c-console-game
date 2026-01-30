#include <iostream>
#include <cstdlib>//rand() and srand()
#include <ctime>// time()
using namespace std;

int main() {
	srand(time(0));// разные значения при каждом запуске
	int random_num = rand() % 100 + 1;//(end-start+1)+start
	int p = 0;

	cout << "YO! Try to guess a number from 1 to 100! " << endl;
	
	while (p != random_num)
	{
		cout << "Your option : ";
		
		if (!(cin >> p)) {
			cout << "Please enter a valid number!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}


		if (p < random_num) {
			cout << "My number is higher!";
		}

		else if (p > random_num) {
			cout << "My number is less!";
		}

		else {
			cout << "You guessed right!" << endl;
		}
	}
	
}