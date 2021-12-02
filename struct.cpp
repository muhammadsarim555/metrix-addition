#include <iostream>
#include <iomanip>

using namespace std;

struct paper
{
        int e;
        int m;
       int total;
};

int main()
{
	int tStudents = 1;
    paper p1[10];
//    paper p1;


int a = 1;
//    cout << "Total Students ";
//    cin >> tStudents;
    cout << "\n";
	for( a = 1; a <= 3; a++ )
		{
			cout << "\n";
			cout <<  "Enter English Markrs :";
			cin >> p1[a].e; 
			cout << "\n";
			cout << "Enter Math Markrs :";
			cin >> p1[a].m;	
			cout << "\n";	
		}
		
		for(a = 1; a <= 3; a++ )
		{
		cout<< a << setw(10) << p1[a].e << setw (10) << p1[a].m <<endl;
		}
    return 0;
}
