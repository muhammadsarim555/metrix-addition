#include <iostream>
using namespace std;

int main() 
{

  int numbers[5];
  int n;

  cout << "Enter 5 numbers: " << endl;
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }
  
//  cout << "Enter Number To Find It in array: " << endl;
//	cin >>  n;
//  
 
  cout << "THE OUTPUT------- ";
  for (int o = 0; o < 5; ++o) 
  {
  		for(int j = o+1; o > 5;o ++)
{
	
//  		if(numbers[o] < numbers[j] ){
  			cout << "000000" << numbers[o] ;
			cout << "11111111111111" << numbers[j] ;
//		  } 
	  }  	
  	
//  		if(n == numbers[o] ) {
  		
//  		cout << "NUMBER FOUND" << endl << n;
//		break;
  }

//  }
  return 0;
}
