#include <iostream>
#include <vector>
#include <string> 
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    /* actual wordle code! */
    fstream words_file;
    words_file.open("words.txt", ios::in);
	string wordleArray[10];
    if (!words_file) {
		cout << "No such file";
	} else {
		string ch;

		for(int i = 0; 10 > i; i++)
		{
            getline(words_file, ch);
            wordleArray[i] = ch;
            cout << wordleArray[i];
		}

		srand(time(0));
		int randomNumber = rand() % 10;
		string chosenWord = wordleArray[randomNumber];
		std::cout << "Random number: " << randomNumber << std::endl;
		std::cout << "Chosen word: " << chosenWord << std::endl;

		int guessNum = 0; 
		string inputArray[1000];
		bool won = false;
  
		while (!won) {
			std::cout << "Type in your guess " << guessNum << ": " << std::endl;
			cin >> inputArray[guessNum]; 
			if (inputArray[guessNum] == chosenWord) {
				won = true;
			}
			guessNum++;
		}

		std::cout << "Congrats! You guessed the word \"" << chosenWord << "\" in " << guessNum << " tries! " << std::endl;
	}
	words_file.close();
	return 0;

    /* hello world code! */
    // vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // for (const string& word : msg)
    // {
    //     cout << word << " ";
    // }
    // cout << endl;
}