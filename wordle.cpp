#include <iostream>
#include <vector>
#include <string> 
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* actual wordle code! */
    fstream words_file;
    words_file.open("words.txt", ios::in);
    if (!words_file) {
		cout << "No such file";
	}
	else {
		char ch;

		while (1) {
			my_file >> ch;
			if (my_file.eof())
				break;

			cout << ch;
		}

	}
	my_file.close();
	return 0;

    /* hello world code! */
    // vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // for (const string& word : msg)
    // {
    //     cout << word << " ";
    // }
    // cout << endl;
}