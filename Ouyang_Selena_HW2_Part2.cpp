//Selena Ouyang
//HW 2 Part 2
//10-3-24


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float scoreOne; //variable for judge one's score
	float scoreTwo; // variable for judge two's score
	float scoreThree; //variable for judge three's score
	float scoreFour; //variable for judge four's score
	float scoreFive; // variable for judge five's score
	float scoreSix; // variable for judge six's score
	float lowestScore; //variable for lowest score
	float highestScore; //variable for highest score
    
    cout << fixed << setprecision(1); 
	cout <<  "Enter scores from 0.0 to 10.0." << endl; //user direction to input scores
	cout << "Score One: "; 
	cin >> scoreOne;
	cout << "Score Two: ";
	cin >> scoreTwo;
	cout << "Score Three: ";
	cin >> scoreThree;
	cout << "Score Four: ";
	cin >> scoreFour;
	cout << "Score Five: ";
	cin >> scoreFive;
	cout << "Score Six: ";
	cin >> scoreSix;


	//Finding the lowest score
	//Determining if score one is the lowest
	if (scoreOne <= scoreTwo && scoreOne <= scoreThree && scoreOne <= scoreFour && scoreOne <= scoreFive && scoreOne <= scoreSix); 
	{
	    lowestScore = scoreOne;
	} 
	//Determining if score two is the lowest
	if (scoreTwo <= scoreOne && scoreTwo <= scoreThree && scoreThree <= scoreFour && scoreTwo <= scoreFive && scoreTwo <= scoreSix)
    {    
        lowestScore = scoreTwo;
    }    
	//Determining if score three is the lowest
	if (scoreThree <= scoreOne && scoreThree <= scoreTwo && scoreThree <= scoreFour && scoreThree <= scoreFive && scoreThree <= scoreSix) //determining if scot
	{ 
	    lowestScore = scoreThree;
	}
    //Determining if score four is the lowest
	if (scoreFour <= scoreOne && scoreFour <= scoreTwo && scoreFour <= scoreThree && scoreFour <= scoreFive && scoreFour <= scoreSix)
	{
	    lowestScore = scoreFour;
	}
	//Determining if score five is the lowest
	if (scoreFive <= scoreOne && scoreFive <= scoreTwo && scoreFive <= scoreThree && scoreFive <= scoreFour && scoreFive <= scoreSix) //determining if score one is the lowest
	{
	    lowestScore = scoreFive;
	}	
	//Determining if score six is the lowest
	if (scoreSix <= scoreOne && scoreSix <= scoreTwo && scoreSix <= scoreThree && scoreSix <= scoreFour && scoreSix <= scoreFive)
	{ 
	    lowestScore = scoreSix;
	}
	
	
	//Finding the highest score
	//Determining if score one is the highest
	if (scoreOne >= scoreTwo && scoreOne >= scoreThree && scoreOne >= scoreFour && scoreOne >= scoreFive && scoreOne >= scoreSix); 
	{
	    highestScore = scoreOne;
	} 
	//Determining if score two is the highest
	if (scoreTwo >= scoreOne && scoreTwo >= scoreThree && scoreThree >= scoreFour && scoreTwo >= scoreFive && scoreTwo >= scoreSix)
    {    
        highestScore = scoreTwo;
    }    
	//Determining if score three is the highest
	if (scoreThree >= scoreOne && scoreThree >= scoreTwo && scoreThree >= scoreFour && scoreThree >= scoreFive && scoreThree >= scoreSix) //determining if score one is the lowest
	{ 
	    highestScore = scoreThree;
	}
    //Determining if score four is the highest
	if (scoreFour >= scoreOne && scoreFour >= scoreTwo && scoreFour >= scoreThree && scoreFour >= scoreFive && scoreFour >= scoreSix)
	{
	    highestScore = scoreFour;
	}
	//Determining if score five is the highest
	if (scoreFive >= scoreOne && scoreFive >= scoreTwo && scoreFive >= scoreThree && scoreFive >= scoreFour && scoreFive >= scoreSix) //determining if score one is the lowest
	{
	    highestScore = scoreFive;
	}	
	//Determining if score six is the highest
	if (scoreSix >= scoreOne && scoreSix >= scoreTwo && scoreSix >= scoreThree && scoreSix >= scoreFour && scoreSix >= scoreFive)
	{ 
	    highestScore = scoreSix;
	}
	
	//Caculating average without lowest and highest score
	cout << "Final Score: " << ((scoreOne + scoreTwo + scoreThree + scoreFour + scoreFive + scoreSix) - lowestScore - highestScore)/4;
	
return 0;
}
