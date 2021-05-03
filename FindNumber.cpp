/*
Find Number
Name
Date 
This program contains a function called find(), which
searches an array of numbers for a desired number. If
the number is within the array, the function returns
the index of the first occurance. Otherwise, the function
returns -1. However, the program does not call the function.
Add a call to the function in the main() so that is searches for
the number 5 in numberArray.
*/
#include <iostream>
using namespace std;

/*
Searches an array of numbers for a desired number. If
the number is within the array, the function returns
the index of the first occurance. Otherwise, the function
returns -1.
*/
int find(int array[], int target, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    const int ARRAY_LENGTH = 6;
    int numberArray[ARRAY_LENGTH] = { 6, 1, -7, 2, -5, 5 };
    if (/* Replace this comment with your call!*/)
    {
        cout << "The number 5 is in numberArray.";
    }
    else
    {
        cout << "The number 5 is not in numberArray.";
    }
    return 0;
}

