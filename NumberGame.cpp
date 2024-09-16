#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    cout << "\n\t\t\t Welcomme to the Casino Game." << endl;
    cout << "Guess a number between 1-100."
            "You'll have limited choices based"
            " on the level you choose."
        << endl;

    while (true)
    {
        cout << "\nEnter difficulty level.\n";   
        cout << "Choose 1 for easy.\t";
        cout << "Choose 2 for medium.\t";
        cout << "Choose 3 for hard.\t";
        cout << "Choose 0 to end the game\n" << endl;

        //set difficulty
        int difflvl;
        cout << "Enter the diff: ";
        cin >> difflvl;

        //generate random num
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int choice;

        //Diff = easy
        if(difflvl == 1)
        {
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
                        cout << "You failed to find the number"
                                " it was: "
                            << secretNumber
                            << endl;

                        cout << "Play the game again to win";
                    }
                }
            }
        }
        //diff lvl medium
        else if (difflvl == 2)
        {
            cout << "You have 7 choices for finding the number";
            int choiceLeft = 7;
            for(int i=1;i<=7;i++)
            {
                cout << "\n\nEnter the number: " ;
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
                        cout << "You failed to find the number"
                                " it was: "
                            << secretNumber
                            << endl;

                        cout << "Play the game again to win";
                    }
                }
            }

        }
        //diff hard
        else if(difflvl = 3)
        {
            cout << "\n You have 5 choices for finding the number.";
            int choiceLeft = 5;
            for (int i=1;1<=5;i++)
            {
                cout << "\n\nEnter the number: ";
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
                        cout << "You failed to find the number"
                                " it was: "
                            << secretNumber
                            << endl;

                        cout << "Play the game again to win";
                    }
                }
            }        
        }
        //to end the game
        else if (difflvl == 0)
        {
            exit(0);
        }
        else
        {
            cout << "Wrong choice, Enter the valid choice to play (0,1,2,3)" << endl;
        }
    }
    return 0;
}
