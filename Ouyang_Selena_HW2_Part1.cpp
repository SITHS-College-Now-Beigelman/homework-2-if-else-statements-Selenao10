//Selena Ouyang
//HW2 Part1
//10-1-24

#include <iostream>
#include <string>

using namespace std;

int main ()

{
    int month;
    int day;
    char month, day;

    cout << "Enter the month and day in the following format. (month), space, (day). ex. input Jan. 1 as \"1 1";

    if (month >= 3 && month <= 6 && day <= 21) //if month is greater than or equal to 3, and less than or equal to 5. all days will print spring 
        if( !month == 6 && day > 20 ) //if month is 6 and day is more than 20 it prints summer 
        cout << Summer;
        else 
        cout << "It is Spring!";

     /*two integer inputs from the user, month and day, and prints 
     the season corresponding to the month (1 = January, 12 = December) and day in the northern hemisphere. Use the following table for the seasons:
For example, if the user enters 3 22 your program will print: It is now Spring!

Spring March 21 June 20
Summer June 21 September 22
Fall September 23 December 21
Winter December 22 March 20
*/

}
