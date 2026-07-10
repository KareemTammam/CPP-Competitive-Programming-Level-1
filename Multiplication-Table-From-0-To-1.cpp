#include <iostream>
#include <iomanip>

using namespace std;

void PrintMultiplicationHeader()
{
    cout << "\t\tMultiplication Table From 1 To 10\n\n";

    cout << setw(6) << " ";

    for (int i = 1; i <= 10; i++)
        cout << setw(6) << i;

    cout << endl;

    for (int i = 0; i < 70; i++)
        cout << "-";

    cout << endl;

}

void PrintMultiplicationTable()
{
    PrintMultiplicationHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout << setw(3) << i << " |";

        for (int j = 1; j <= 10; j++)
        {
            cout << setw(6) << i * j;
        }

        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();
}