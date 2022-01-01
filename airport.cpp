#include <iostream>
using namespace std;

struct time_schedule //declare a structure
{
int hour; 
int min; 
string timeFormat;
};

int main()
{
	
	time_schedule departure_time;
		cout << "Please Add Departure Time";
		cout << "\n";
		cin >> departure_time.hour;	
		
		cout << "\n";
		cout << "Please Add Departure Minutes";
		cout << "\n";		
		cin >> departure_time.min >> departure_time.timeFormat;	
		
		cout << "\n";
		cout << "Departure time is " << departure_time.hour << ":" << departure_time.min << departure_time.timeFormat;
		cout << "\n";

		time_schedule arrival_time;
		
		cout << "\n";
		cout << "Please Add Arrival Time";
		cout << "\n";
		cin >> arrival_time.hour;	
		
		cout << "\n";
		cout << "Please Add Arrival Minutes";
		cout << "\n";		
		cin >> arrival_time.min >> arrival_time.timeFormat;	
		
		cout << "\n";
		cout << "Arrival time is " << arrival_time.hour << ":" << departure_time.min << arrival_time.timeFormat;
	
	
		cout << "\n";
//		cout << arrival_time.hour - departure_time.hour;

		if(arrival_time.timeFormat < departure_time.timeFormat){
			
		}
		


}
