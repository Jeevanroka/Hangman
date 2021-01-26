#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

void setcolor(string C)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    if (C == "gray" || C == "grey" || C == "default")
        SetConsoleTextAttribute(h, 7);
    else if (C == "blue")
        SetConsoleTextAttribute(h, 9);
    else if (C == "green")
        SetConsoleTextAttribute(h, 10);
    else if (C == "cyan")
        SetConsoleTextAttribute(h, 11);
    else if (C == "red")
        SetConsoleTextAttribute(h, 12);
    else if (C == "purple")
        SetConsoleTextAttribute(h, 13);
    else if (C == "yellow")
        SetConsoleTextAttribute(h, 14);
    else if (C == "white")
        SetConsoleTextAttribute(h, 15);
}


int main()

{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    srand(time(NULL)); // seed for rand no. generators
    //step 2 - select rand phrase
    string Phrases[5] = { "Jon Snow","Arya Stark", "Khal Drogo","Missandei", "Grey Worm" };
    string Secretword = Phrases[rand() % 5];
    //step 3- create Guessword
    string GuessWord = Secretword;
    for (int x = 0; x < Secretword.size(); x++)
    {
        if (Secretword[x] == ' ')
            GuessWord[x] = ' ';
        else
            GuessWord[x] = '.';

    }
    // step 4- declare more variables
    int BadGuesses = 0;
    string Letter;
    int Location;
    setcolor("purple");
    string LettersRemaining = "abcdefghijklmnopqrstuvwxyz";
    //step 5 - while loop of program
    while (GuessWord != Secretword && BadGuesses <= 6)
    {
        system("cls");
        if (BadGuesses == 0)
        {


            cout << "                 Characters of Game Of Thrones                             \n";

            setcolor("red");
            cout << "                                                        ?____?             \n";
            cout << "                                                        /    \\   /        \n";
            cout << "   /---\\                                               |o  o|   /         \n";
            cout << "   |0 0|                                                \\___/  /|         \n";
            cout << "   \\__/                                                  ||   / /         \n";
            setcolor("cyan");
            cout << "     |                                                 ---------/          \n";
            cout << "    _|_                                               /   ||               \n";
            cout << "     |                                               /    ||               \n";
            setcolor("blue");
            cout << "     /\\                                                -------            \n";
            cout << "                                                       /       \\          \n";
            cout << "                                                       ||      ||          \n";
        }

        if (BadGuesses == 1)
        {
            cout << "                 Characters of Game Of Thrones                       \n";

            cout << "                                                  ?____?     /       \n";
            cout << "                                                  /    \\   /        \n";
            cout << "   /---\\                                         |o  o|   /         \n";
            cout << "   |0 0|                                          \\___/  /|         \n";
            cout << "   \\__/                                            ||   / /         \n";
            setcolor("cyan");
            cout << "     |                                           ---------/          \n";
            cout << "    _|_                                         /   ||               \n";
            cout << "     |                                         /    ||               \n";
            setcolor("blue");
            cout << "     /\\                                          -------            \n";
            cout << "                                                 /       \\          \n";
            cout << "                                                 ||      ||          \n";

        }
        if (BadGuesses == 2)
        {
            cout << "                 Characters of Game Of Thrones                  \n";

            cout << "                                             ?____?     /       \n";
            cout << "                                             /    \\   /        \n";
            cout << "   /---\\                                    |o  o|   /         \n";
            cout << "   |0 0|                                     \\___/  /|         \n";
            cout << "   \\__/                                       ||   / /         \n";
            setcolor("cyan");
            cout << "     |                                      ---------/          \n";
            cout << "    _|_                                    /   ||               \n";
            cout << "     |                                    /    ||               \n";
            setcolor("blue");
            cout << "     /\\                                     -------            \n";
            cout << "                                            /       \\          \n";
            cout << "                                            ||      ||          \n";

        }
        if (BadGuesses == 3)
        {
            cout << "                 Characters of Game Of Thrones             \n";

            cout << "                                        ?____?     /       \n";
            cout << "                                        /    \\   /        \n";
            cout << "   /---\\                               |o  o|   /         \n";
            cout << "   |0 0|                                \\___/  /|         \n";
            cout << "   \\__/                                  ||   / /         \n";
            setcolor("cyan");
            cout << "     |                                 ---------/          \n";
            cout << "    _|_                               /   ||               \n";
            cout << "     |                               /    ||               \n";
            setcolor("blue");
            cout << "     /\\                                -------            \n";
            cout << "                                       /       \\          \n";
            cout << "                                       ||      ||          \n";

        }
        if (BadGuesses == 4)
        {
            cout << "                 Characters of Game Of Thrones     \n";

            cout << "                                 ?____?     /      \n";
            cout << "                                /    \\   /        \n";
            cout << "   /---\\                       |o  o|   /         \n";
            cout << "   |0 0|                        \\___/  /|         \n";
            cout << "   \\__/                          ||   / /         \n";
            setcolor("cyan");
            cout << "     |                         ---------/          \n";
            cout << "    _|_                       /   ||               \n";
            cout << "     |                       /    ||               \n";
            setcolor("blue");
            cout << "     /\\                        -------            \n";
            cout << "                               /       \\          \n";
            cout << "                               ||      ||          \n";

        }
        if (BadGuesses == 5)
        {
            cout << "                 Characters of Game Of Thrones     \n";

            cout << "                   ?____?     /                    \n";
            cout << "                   /    \\   /                     \n";
            cout << "   /---\\          |o  o|   /                      \n";
            cout << "   |0 0|           \\___/  /|                      \n";
            cout << "   \\__/             ||   / /                      \n";
            setcolor("cyan");
            cout << "     |            ---------/                       \n";
            cout << "    _|_          /   ||                            \n";
            cout << "     |          /    ||                            \n";
            setcolor("blue");
            cout << "     /\\           -------                         \n";
            cout << "                  /       \\                       \n";
            cout << "                  ||      ||                       \n";

        }
        if (BadGuesses == 6)

        {
            cout << "                 Characters of Game Of Thrones\n";

            cout << "                          ?____?     /        \n";
            cout << "                          /    \\   /         \n";
            cout << "                          |o  o|   /          \n";
            cout << "                          \\___/  /|          \n";
            cout << "                            ||   / /          \n";
            setcolor("cyan");
            cout << "                         ---------/           \n";
            cout << "                        /   ||                \n";
            cout << "                  /    /    ||                \n";
            setcolor("blue");
            cout << "       /----\    /     // -------             \n";
            cout << "      |  0   |--- ----//   /       \\         \n";
            cout << "       \___ _/     \     \\||       ||        \n";

            cout << "               YOU LOSE                       \n";


        }
        //system("pause");
        setcolor("yellow");
        cout << "Letters Remaining: ";
        cout << LettersRemaining << endl;
        setcolor("cyan");
        cout << "BadGuesses = " << BadGuesses << endl;
        setcolor("green");
        //step 8
        cout << "Characters to guess: " << GuessWord << endl;
        setcolor("red");
        //step 9
        cout << "Enter a letter: ";
        cin >> Letter;
        if (LettersRemaining.find(Letter, 0) != -1)
            LettersRemaining.replace(LettersRemaining.find(Letter, 0), 1, " ");
        //
         // Step 10
        Location = Secretword.find(Letter, 0);
        if (Location > Secretword.size())
            BadGuesses++;
        else
            while (Location < Secretword.size())
            {
                GuessWord.replace(Location, 1, Letter);
                Location = Secretword.find(Letter, Location + 1);
            }

    }  // end while

    if (Secretword == GuessWord && BadGuesses != 6)
    {
        cout << "                  YOU WIN                \n";// step 11
    }

    return 0;
}

