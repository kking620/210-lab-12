#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

const int SIZE = 30;

int main()
{
    array<double, SIZE> hourlyWage;
    
    ifstream fin;
    fin.open("inputFile.txt");
    if (fin.good())
    {
        for (int i = 0; i < SIZE; i++)
        {
            fin >> hourlyWage[i];
        }

        fin.close();

        cout << "1. Max Size: " << hourlyWage.size() << endl;
        cout << "2. Values: ";
        for (double val : hourlyWage) cout << val << " " << endl;
        cout << "2. Element 4: " << hourlyWage.at(4) << endl;
        cout << "3. Front: " << hourlyWage.back() << endl;
        cout << "4. Back: " << hourlyWage.front() << endl;
    }
    else
        cout << "File not found.\n";

    return 0;
}