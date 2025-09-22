//COMSC-210 | Lab 12 | Kristofer King
//IDE Used: VSC
#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

//declares and initializes a maximum size of the file input
const int SIZE = 30;

int main()
{
    //declares a STD::array to track hourlywage from a file input
    array<double, SIZE> hourlyWage;
    
    //opens and reads the file as long as the file can be found
    ifstream fin;
    fin.open("inputFile.txt");
    if (fin.good())
    {
        //for loop that retrieves the hourly wage from the file and sets that value to equal the value of that element within the array
        for (int i = 0; i < SIZE; i++)
        {
            fin >> hourlyWage[i];
        }

        //closes the file as we no longer need to collect information from it
        fin.close();

        //finds and displays the maximum size of the array
        cout << "1. Max Size: " << hourlyWage.size() << endl;
        
        //displays the values of the given array
        cout << "2. Values: ";
        for (double val : hourlyWage) 
            cout << val << " ";

        cout << endl;
        
        //displays the value of the element at position 4
        cout << "3. Element 4: " << hourlyWage.at(4) << endl;
        
        //displays the value of the element at the front of the array
        cout << "4. Front: " << hourlyWage.front() << endl;
        
        //displays the value of the element at the back of the array
        cout << "5. Back: " << hourlyWage.back() << endl;

        //determines if the array is empty and returns false if it is not and true if it is
        cout << "6. Empty? " << (hourlyWage.empty() == 0? "False" : "True") << endl;

        //determines the address of the array itself
        cout << "7. Address: " << hourlyWage.data() << endl;

        //function that sorts the array from smallest to largest
        sort(hourlyWage.begin(), hourlyWage.end());
        cout << "8. Sorted: ";
        for (double val : hourlyWage) 
            cout << val << " ";
            
        cout << endl;

        //function that reverses the sorted list so that it displays the values in the opposite order of the normal list
        sort(hourlyWage.rbegin(), hourlyWage.rend());
        cout << "9. Reverse Sorted: ";
        for (double val : hourlyWage) 
            cout << val << " ";
            
        cout << endl;

        //function that finds the largest element within the array
        cout << "10. Max: " << *max_element(hourlyWage.begin(), hourlyWage.end()) << endl;

        //function that finds the smallest element within the array
        cout << "11. Min: " << *min_element(hourlyWage.begin(), hourlyWage.end()) << endl;
        
        //adds all of the values of the array together to find the total sum of the array
        cout << "12. Sum: " << accumulate(hourlyWage.begin(), hourlyWage.end(), 0) << endl;
    }
    //if no file is found then it will display this error message
    else
        cout << "File not found.\n";

    return 0;
}