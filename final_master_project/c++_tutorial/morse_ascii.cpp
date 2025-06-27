#include <iostream>
#include <string>
#include <Windows.h>

#define MAX 96

using namespace std;

string morse[]={ ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
        		 "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "---...", "..--..", ".----.", "-....-", "-..-.", ".--.-.", "-...-", "-.-.--"};

string ascii[]={"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
                "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", ",", ":", "?", "'", "-", "/", "@", "=", "!"};



void translate(string sentence){
	
	for(int i = 0; i < sentence.length(); i++){		// Loop to cover all the length of the sentence
	
		char letter = toupper(sentence[i]);			// Transform to upper case the letter
		
		if(letter == ' '){							// If it is a space, pass to the next letter
			cout << " ";
			Sleep(500);
			continue;
		}
		
		for(int j = 0; j < MAX; j++){								// To find the letter in the array 
			if (letter == ascii[j][0]){								// We have found the letter
				
				for(int jj= 0; jj < morse[j].length(); jj++){		// Go through all the letter symbols in the Morse alphabet
					if(morse[j][jj] == '.'){						// The symbol is .			 
						cout << ".";
						Beep(300, 100);
						Sleep(200);
					}
					else if(morse[j][jj] == '-'){					// The symbol is -
						cout << "-";
						Beep(700, 100);
						Sleep(200);
					}
				}
				
				cout << " ";
				break;			// Next letter
			}
		}
		Sleep(500);
	}
}



int main(){

	string input;
	
	cout << "Add a sentence to transform to ascii: \n";
	cin >> input;
	
	translate(input);
	
	return 0;
}
