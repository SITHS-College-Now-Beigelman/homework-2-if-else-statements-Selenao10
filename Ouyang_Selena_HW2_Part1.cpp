//Selena Ouyang
//HW2 Part1
//10-1-24

#include <iostream>

using namespace std;

int main()
{

	int month;
	int day;
	char space;

	cout << "Enter the month and day in the following format. Ex. January 1 would be 1 1" << endl;
    cin >> month >> space >> day;


	//If user inputs 1 as month, it will print January (day) & "It is Winter!"
    	if (month == 1)
		    cout << "January " << day << "\nIt is Winter!";
		
		
    //If user inputs 2 as month, it will print February (day) & "It is Winter!"
    	if (month == 2)
	    	cout << "February " << day << "\nIt is Winter!";


    //If user inputs 3 as month & day is less than or equal to 20, it will print March (day) & "It is Winter!"
	    if (month == 3 && day <= 20)
	    	cout << "March " << day << "\nIt is Winter!";
	//If not (day is greater than 20), then it will print "It is Spring!"
		else
		cout << "March " << day << "\nIt is Spring!";


    //If user inputs 4 as month, it will print April (day) & "It is Spring!"
	    if (month == 4)
		    cout << "April " << day << "\nIt is Spring!";
		    
		    
    //If user inputs 5 as month, it will print May (day) & "It is Spring!"
    	if (month == 5)
	    	cout << "May " << day << "\nIt is Spring!";


    //If user inputs 6 as month & day is less than or equal to 20, it will print June (day) & "It is Summer!"
	    if (month == 6 && day <= 20)
		    cout << "June " << day << "\nIt is Spring!";
    //If not (day is greater than 20), then it will print "It is Summer!"
        else 
            cout << "June " << day << "\nIt is Summer!";
            
            
    //If user inputs 7 as month, it will print July (day) & "It is Summer!"    
	    if (month == 7)
		    cout << "July " << day << "\nIt is Summer!";
		    
		    
    //If user inputs 8 as month, it will print August (day) & "It is Summer!"  
	    if (month == 8)
		    cout << "August " << day << "\nIt is Summer!";
		    
		    
    //If user inputs 9 as month & day is less than or equal to 22, it will print July (day) & "It is Summer!"  
	    if (month == 9 && day <= 22)
		    cout << "September " << day << "\nIt is Spring";
    //If not (day is greater than 22), then it will print September (day) & "It is Fall!"
        else 
            cout << "September " << day << "\nIt is Fall!";
            
            
    //If user inputs 10 as month, it will print August (day) & "It is Fall!"       
	    if (month == 10)
		    cout << "October " << day << "\nIt is Fall!";
		    
		    
    //If user inputs 11 as month, it will print August (day) & "It is Fall!" 
	    if (month == 11)
		    cout << "November " << day << "\nIt is Fall!";


    //If user inputs 12 as month & day is less than or equal to 21, it will print December (day) & "It is Fall!"  
	    if (month == 12 && day <= 21)
		    cout << "December " << day << "\nIt is Fall!";
	//If not (day is greater than 21), then it will print December (day) & "It is Winter!"
		else
		    cout << "December " << day << "\nIt is Winter!";

	return 0;
}
