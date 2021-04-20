#include <iostream>

using namespace std;

int main() {
    int secretNum = 42;
    int guessNum = 0;
       
    while (secretNum != guessNum) {
        
        cout << "Enter an random number: ";
        
        cin >> guessNum;
        
        int tries;
        

        if (guessNum == secretNum) {
            cout << "Your entry matches the secret number!" << endl;
            cout << "You required " << tries << " attempts to guess the secret number." << endl; //My attempt at step 8 output the number of tries 
        }
        else if (guessNum < secretNum) {
            cout << "Your entry is a lesser value than the secret number. Guess again." << endl;
        }
        else if (guessNum > secretNum) {
            cout << "Your entry is greater value than the secret number. Guess again." << endl;
        }
        tries = (guessNum-guessNum) + 1; //My attempt at increments
    }
    cout << "Thanks for guessing!" << endl;

return 0;
}