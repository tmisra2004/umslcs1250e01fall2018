#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int uchoice; //uchoice means "User Choice"
int mchoice; //mchoice means "Machine Choice"
int uscore = 0; //The User's score
int mscore = 0; //The Machine's score

void menu()
{
    cout << endl;
    cout << "Let's play Rock, Paper, Scissors!!!" << endl;
    cout << endl;
    cout << "Choose a play or option: " << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "4. Quit" << endl;
    cout << "5. View Score" << endl;
    cout << endl;
    cin >> uchoice;
    if (uchoice != 1)
    {
        if (uchoice != 2)
        {
            if (uchoice != 3)
            {
               if (uchoice != 4)
               {
                   if (uchoice != 5)
                   {
                        cout << endl;
                        cout << "Invalid choice please try again." << endl;
                        cin.clear(); //For non-integer bad input
                        cin.ignore(1,'\n'); //For non-integer bad input
                        cout << endl;
                        menu();
                   }
               }
            }
        }


    }
    
}

void game()
{
    cout << endl;
    switch(uchoice)
    {
        case 1: cout << "You have played Rock.";
                cout << endl;
                if (mchoice == 1)
                {
                    cout << "Draw. Play again." << endl;
                    cout << endl;
                }

                else if (mchoice == 2)
                {
                    cout << "Paper wraps Rock. Paper wins." << endl;
                    mscore++;
                    cout << "Player: " << uscore << " Computer: " << mscore << endl;
                    cout << endl;
                }

                else
                {
                    cout << "Rock smashes Scissors! Rock wins! You win!" << endl;
                    uscore++;
                    cout << "Player: " << uscore << " Computer: " << mscore << endl;
                    cout << endl;
                }

                break;
        
        case 2: cout << "You have played Paper.";
                cout << endl;
                if (mchoice == 1)
                {
                    cout << "Paper wrap rocks! Paper wins! You win!" << endl;
                    uscore++;
                    cout << "Player: " << uscore << " Computer: " << mscore << endl;
                    cout << endl;
                }

                else if (mchoice == 2)
                {
                    cout << "Draw. Play again." << endl;
                    cout << endl;
                }

                else
                {
                    cout << "Scissors cuts paper. Scissors wins." << endl;
                    mscore++;
                    cout << "Player: " << uscore << " Computer: " << mscore << endl;
                    cout << endl;
                }
                break;
        
        case 3: cout << "You have played Scissors.";
                cout << endl;
                if (mchoice == 1)
                {
                    cout << "Rock smashes Scissors. Rock wins." << endl;
                    mscore++;
                    cout << "Player: " << uscore << " Computer: " << mscore << endl;
                    cout << endl;
                }

                else if (mchoice == 2)
                {
                    cout << "Scissors cuts paper! Paper wins! You win!" << endl;
                    uscore++;
                    cout << "Player: " << uscore << " Computer: " << mscore << endl;
                    cout << endl;
                }

                else
                {
                    cout << "Draw. Play again." << endl;
                    cout << endl;
                }
                break;
        
        case 4: cout << "Goodbye! Thanks for playing!" << endl;
                cout << endl;
                exit(EXIT_SUCCESS);

        case 5:  cout << "Player: " << uscore << " Computer: " << mscore << endl;
                 cout << endl;
        
        default: break;
        
    }



}

int main()
{
    bool playagain = true;
    while (playagain == true)
    {
        srand(time(0));
        mchoice = (rand() % (3 - 1 + 1)) + 1;
        menu();
        game();
        cout << endl;
    }

    return 0;
    
}