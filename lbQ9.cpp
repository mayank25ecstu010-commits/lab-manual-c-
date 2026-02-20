
#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char ch;

	cout << "Enter a single character: ";
	cin >> ch;

	if (isdigit(static_cast<unsigned char>(ch))) {
		cout << "Number";
	} else if (isalpha(static_cast<unsigned char>(ch))) {
		char lowerCh = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
		if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
			cout << "Vowel";
		} else {
			cout << "Consonant";
		}
	} else {
		cout << "Other symbol";
	}

	return 0;
}
