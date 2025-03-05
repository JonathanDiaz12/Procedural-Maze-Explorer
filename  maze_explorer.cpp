#include <iomanip>
#include <iostream>
#include <cstdlib>
using namespace std;

int Rows = 5;
int Columns = 5;
int Random;
char Player = 'x';


int main()
{
    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            if (i == 0 || i == Rows - 1 || j == 0 || j == Columns - 1) {
                cout << "#"; // Print walls at the borders
            } else if (i == 1 && j == 1) {
                cout << "S"; // Print start
            } else if (i == Rows - 2 && j == Columns - 2) {
                cout << "E"; // Print end
            } else {
                Random = rand() % 11; // Generate a random number between 0 and 10
                if (Random == 0 || Random == 1) {
                    cout << "#"; // Print wall
                } else {
                    cout << " "; // Print path
                }
            }
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
