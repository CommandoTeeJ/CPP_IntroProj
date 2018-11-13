#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	// variables famaroo
	int rest,arest,choice,choice2,choice3,song;
	double cost,hours;
	string restv;
	const int disc = 50;
	

	
	//Price array s
	//(1=DJ per hour)
	int priced[] = {0,75};
	//(wedding: 1 = cer,speaking;2=cer,soundtrack;3=cer,live;4=rec,speak;5=rec,dance;6=rec,live)
	int pricew[] = {0,60,125,200,60,75,125};
	//(Live sound: 1=soundtrack;2=band)
	int pricel[] = {0,200,400};
	//(recording: 1=4 or less;2=5 or more)
	int pricer[] = {0,75,50};
	
	//Repeated phrases:
	string uselect,howl,inv;
	uselect = "You have selected: ";
	howl = "How many hours long will the event be?: ";
	inv = "***The option you selected is invalid.***";
	
	//Using do function to allow a restart
	do
	{
		//Ensuring variable success
		rest=1;
		arest=0;
		hours=0;
		choice2=0;
		choice3=0;
		
		//Initial displayed information
		cout << "This program will calculate the price of a custom" << endl << "service from Five 19 Productions." << endl << endl;
		cout << "Event types:" << endl << "1. DJing" << endl << "2. Weddings" << endl << "3. Live Sound" << endl << "4. Recording" << endl << endl;
		cout << "Please enter the number of the event you are planning: ";
		
		//Event type
		cin >> choice;
		
		//format output
		cout << fixed << showpoint << setprecision(2);
		
		//Choice Switch
		switch (choice)
		{
			//DJ
			case 1:
				cout << endl << endl << uselect << endl << "1. DJing." << endl << endl << "DJing has an hourly rate. " << endl << howl;
				
				// Asks for time amount
				cin >> hours;
				
				//Calculates cost
				cost = hours * priced[1];
				
				//Displays cost
				cout << endl << "A DJing event for " << hours << " hours will cost $" << cost << "."; //display cost of a DJ event
				break;
				
			
			//Weddings
			case 2:
				cout << endl << endl << uselect << endl << "2. Weddings." << endl << endl;
				cout << "1. Ceremnony only" << endl << "2. Reception only" << endl << "3. Both Ceremony and Reception" << endl;
				cout << "Please enter the number of the option you prefer: ";
				
				//Input for wedding choice
				cin >> choice2;
				
				//This switch furthers into the weddings selection
				switch (choice2)
				{
					case 1:
						//gives the user a list of ceremony options and asks for their preference
						cout << endl << "You have selected ceremony only. Five 19 offers three ceremony packages." << endl << endl;
						cout << "1: Speaking only. No music/singing." << endl;
						cout << "2: Includes soundtrack or 1 instrumental performance." << endl;
						cout << "3: Includes ability to have live performers and soundtracks." << endl;
						cout << "Please enter the number of the option you would like: "; 
						
						//Input for current choice
						cin >> choice3;
						
						switch (choice3)
						{
							case 1:
								cout << endl << "You have selected Speaking." << endl << "The total cost of this option is $" << pricew[1] << ".";
								break;
							case 2:
								cout << endl << "You have selected Sound Track." << endl << "The total cost of this option is $" << pricew[2] << ".";
								break;
							case 3:
								cout << endl << "You have selected Live Sound." << endl << "The total cost of this option is $" << pricew[3] << ".";
								break;
							default:
								cout << endl << inv << endl << endl;
								arest=1;
								break;
						}
						break;
					case 2:
						//Lists choices for reception only
						cout << endl << "You have selected reception only. Five 19 offers three reception packages charged by the hour." << endl << endl;
						cout << "1: Speaking and Background music." << endl;
						cout << "2: Music for Dancing and Option 1." << endl;
						cout << "3: For Live music performances includes lighting and option 1." << endl;
						cout << "Please enter the number of the option you would like: ";
						
						//Input for current choice
						cin >> choice3;
						
						switch (choice3)
						{
							//Background
							case 1:
								cout << endl << "You have selected Speaking and Background music." << endl << "How many hours will the reception last?: ";
								cin >> hours;
								cost = hours * pricew[4];
								cout << endl << "The total cost for a reception lasting " << hours << " hours is $" << cost << ".";
								break;
							//Dance
							case 2:
								cout << endl << "You have selected Music for Dancing." << endl << "How many hours will the reception last?: ";
								cin >> hours;
								cost = hours * pricew[5];
								cout << endl << "The total cost for a reception lasting " << hours << " hours is $" << cost << ".";
								break;
							//Live
							case 3:
								cout << endl << "You have selected Live Music performances." << endl << "How many hours will the reception last?: ";
								cin >> hours;
								cost = hours * pricew[6];
								cout << endl << "The total cost for a reception lasting " << hours << " hours is $" << cost << ".";
								break;
							//Other
							default:
								cout << endl << inv << endl << endl;
								arest=1;
								break;
						}
						break;
					case 3:
						//
						cout << endl << "You have selected Sound Track." << endl << "Now lets look at receptions.";
						cout << endl << "Five 19 offers three reception packages charged by the hour." << endl << endl;
						cout << "1: Speaking and Background music." << endl;
						cout << "2: Music for Dancing and Option 1." << endl;
						cout << "3: For Live music performances includes lighting and option 1." << endl;
						cout << "Please enter the number of the option you would like: "; 
						
						//Input for current choice
						cin >> choice3;
						
						switch (choice3)
						{
							case 1:
								cout << endl << "You have selected Speaking and Background music." << endl << howl;
								cin >> hours;
								cost = hours * pricew[4];
								cost = cost + 75;
								cost = cost - disc;
								cout << endl << "The total discount for this package is $50.00." << endl << "The total cost for a this package is $" << cost << ".";
								break;
							case 2:
								cout << endl << "You have selected Music for Dancing." << endl << howl;
								cin >> hours;
								cost = hours * pricew[5];
								cost = cost + 75;
								cost = cost - disc;
								cout << endl << "The total discount for this package is $50.00." << endl << "The total cost for this package is $" << cost << ".";
								break;
							case 3:
								cout << endl << "You have selected Live Music performances." << endl << howl;
								cin >> hours;
								cost = hours * pricew[6];
								cost = cost + 75;
								cost = cost - disc;
								cout << endl << "The total discount for this package is $50.00." << endl << "TThe total cost for this package is $" << cost << ".";
								break;
							default:
								cout << endl << inv << endl << endl;
								arest=1;
								break;
						}
						
						break;
					default:
						cout << endl << inv << endl << endl;
						arest=1;
						break;
					
				}
				break;
			
			//Live Sound
			case 3:
				cout << endl << endl << "You have selected number 3. Live Sound Five 19 offers two different options for live sound." << endl << endl;
				cout << "1. Speaking event with soundtrack." << endl << "2. Concert with Live Band." << endl;
				cout << "Please enter the number of the option you prefer: ";
				
				//Input for Live Sound event
				cin >> choice2;
				
				//Calculate live sound costs
				switch (choice2)
				{
					case 1:
						cout << endl << "You have selected a speaking event with soundtrack." << endl << "The total cost for this event will be $" << pricel[1] << ".";
						break;
					case 2:
						cout << endl << "You have selected a live music event with a band." << endl << "The total cost for this event will be $" << pricel[2] << ".";
						break;
					default:
						cout << endl << inv << endl << endl;
						arest=1;
						break;
				}
				break;
			
			//Recording
			case 4:
				cout << endl << endl << "You have selected to record your own song in our studio." << endl << "How many songs would you like to record?: ";
				
				//Asks how many songs are recorded
				cin >> song;
				
				if (song >= 1 && song <= 4)
				{
					cost = song * pricer[1];
					cout << endl << "In order to record " << song << " songs, it will cost $" << cost << ".";
				}
				else if (song >= 5)
				{
					cost = song * pricer[2];
					cout << endl << "In order to record " << song << " songs, it will cost $" << cost << ".";
				}
				else
				{
					cout << endl << inv << endl << endl;
					arest=1;
				}
				
				
				break;
			
			//Other
			default:
				{
					cout << endl << inv << endl << endl;
					arest=1;
				}
				break;
		}
		
		//Repeat or nah
		if(arest==0)
		{
			cout << endl << endl << "Would you like to repeat? (Y or N): ";
			cin>>restv;
			if((restv=="y")||(restv=="Y"))
			{
				rest=1;
			}
			else
			{
				rest=0;
			}
		}
		else
		{
			cout<< "**The program has automatically restarted**" << endl << endl;
			rest=1;
		}
	}
	while (rest == 1);
	return 0;
}
