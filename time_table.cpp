#include <iostream>
#include <iomanip>

using namespace std;

struct paper
{
        int e;
        int m;
       	float total;
       	float percentage;
       
};

int main()
{
	int tStudents = 3;
    paper p1[10];

int a = 1;

    cout << "\n";
	for( a = 1; a <= tStudents; a++ )
	{	
		cout << "Roll #:" << a ;
		cout << "\n";
		cout <<  "Enter English Markrs :";
		cin >> p1[a].e; 
		cout << "\n";
		cout << "Enter Math Markrs :";
		cin >> p1[a].m;	
		cout << "\n";	
		p1[a].total = p1[a].e + p1[a].m;
		p1[a].percentage = p1[a].total/2;
	}
		
		cout << "Roll #";
		cout << setw(15) << "English #";
		cout << setw(20) << "Math #";
		cout << setw(20) << "Total #";
		cout << setw(20) << "Percentage #";
		cout << "\n";
	
		for(a = 1; a <= tStudents; a++ )
		cout<< a << setw(20) << p1[a].e << setw (20) << p1[a].m << setw (20)  << p1[a].total << setw (20)  << p1[a].percentage <<endl;
    	return 0;
}
