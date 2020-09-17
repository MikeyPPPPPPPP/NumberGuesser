// Name: Michael Provenzano
// Course: CIS 006 Intro to programming 
// CRN: 44574 
// Date: 9/17/2020
// Assignment: NumberGuesser
#include <iostream>
using namespace std;

int main(){
    bool play = true;
    char awn;
    do
    {
        int high = 100;
        int low = 1;
        bool correct = false;
        bool first = true;
        int num; 
        char guess;
        int check;

        cout << "\nGuess a number 1/100\n" << endl;
        do
        {
            int mid;
            srand(time(0));
            if (first == true){
                mid = (high / 2);
            } else {
                mid = (high + low) / 2;
            }
            if (mid == check){
                mid++;
            }
            cout << "Is your number ?: " << mid << " (h/l/c): ";

            cin >> guess;
            if (guess == 'h')
            {
                low = mid;
                cout << "\n";
                
            } else if (guess == 'l')
            {
                high = mid;
                cout << "\n";   
            } else {
                cout << "\nGreat! ";
                correct = true; 
            }
            
            //cout << "High value is: " << high << endl;
            //cout << "Low value is: " << low << "\n\n\n";
            first = false;
            check = mid;
        } while (correct != true);
        cout << "Do you want to play again?(y/n): ";
        cin >> awn;
        if (awn == 'n'){
            play = false;
        }
    } while (play == true);
    
    

    return 0;
}