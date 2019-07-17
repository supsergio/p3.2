/*
 •• P3.2
 Write a program that translates a number between 0 and 4 into the closest letter grade. For example, the number 2.8 (which might have been the average of several grades) would be converted to B–. Break ties in favor of the better grade; for example 2.85 should be a B.
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "Enter grade number: ";
    float number;
    cin >> number;
    int grade = number;
    float xtra = (number - grade) * 100;
    string letter, suffix;
    
    
    //cout << number << " " << grade << " " << xtra << "\n";
    
    if (number >= 3.7)
    {
        letter = "A";
        if (number < 4)
        {
            suffix = "-";
        }
    }
    else if (number >= 2.7)
    {
        letter = "B";
    }
    else if (number >= 2)
    {
        letter = "C";
    }
    else if (number >= 0.7)
    {
        letter = "D";
    }
    else
    {
        letter = "F";
    }
    if (xtra >= 85 && xtra <= 99.9 && letter != "F")
    {
        suffix = "-";
    }
    else if (xtra > 0.1 && xtra< 70 && letter != "F")
    {
        suffix = "+";
    }
    cout << letter << suffix << endl;
}
