#include <iostream>
using namespace std;

int main()
{
    for (int y = 1; y <= 4; y++)
    {
        for (int x = 1; x <= 9; x++)
        {
            if ((y == 1 || y == 4) && (x == 2 || x == 3 || x == 4 ||  x == 6 || x == 7 ||x == 8 ))
            {
                cout << "X";
            }
            else if ((y == 2 || y == 3) && (x == 1 || x == 5 || x == 9))
            {
                cout << "X";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}