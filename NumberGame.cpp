#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main()
{
    cout << "\n\t\t\t Welcomme to the Numbwe Geussing Game." << endl;
    cout << "Guess a number between 1-100."
            "You'll have limited choices based"
            " on the level you choose."
        << endl;

        //generate random num
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int choice;

        cout << "You have 10 choices for finding the number." << endl;
        int choiceLeft=10;
        for(int i=1;i<=10;i++)
        {
            //promt the player to input a number
            cout << "Guess the number: ";
            cin >> choice;
            if(choice == secretNumber)
            {
                cout << "You won!!, " << secretNumber << " is the right number\n\n" << endl;
                cout << "Thanks for playing the game..." << endl;
                cout << "Play with us again!!\n\n" << endl;
                break;
            }
            else
            {
                cout << "Nope " << choice << " is wrong.\n";
                if (choice > secretNumber)
                {
                    cout << "The number is smaller than the number you have chosen." << endl;
                }
                else
                {
                    cout << "The number is greater than the number you have chosen." << endl;
                }
                choiceLeft --;
                cout << choiceLeft << " choices left." << endl;
                if(choiceLeft == 0)
                {
                    cout << "You failed to find the number it was: "<< secretNumber << endl;
                    cout << "Play the game again to win";
                }
            }
        }
    return 0;
}
