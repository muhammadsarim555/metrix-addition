	#include <iostream>
using namespace std;

int main()
{
	
	int a[3][3];
	int b[3][3];
	int rslt[3][3];
	
	int row, column, row2, column2;
	
	cout << "Enter rows matrix 1 = ";
	cin >> row;
	
	cout << "Enter Columns matrix 1 = ";
	cin >> column;


		

			
		
		
	cout << "First Matrix Number";
	for(int i = 0 ; i < row; i++)
	for(int j = 0 ; j < column; j++)
	{
	
	cout << endl;
	cin >> a[i][j];	
	}


	for(int i = 0 ; i < row; i++)
	{
	for(int j = 0 ; j < column; j++)
	
	cout << a[i][j] << " ";
	cout << endl;
	
	}

	cout << "Enter rows matrix 2 = ";
	cin >> row2;
	
	cout << "Enter Columns matrix 2 = ";
	cin >> column2;



	cout << "Enter Second Matrix Number";
	for(int h = 0; h< row2; h++) 
	for(int k = 0 ; k < column2; k++)
	{
	cout << endl;
	cin >> b[h][k];
	}
	
	
	
	for(int i = 0 ; i < row2; i++)
	{
	for(int j = 0 ; j < column2; j++)
	cout << b[i][j] << " ";
	cout << endl;
	}
	
	
		if(column != row2) 
	{
	cout << "Matrix Rule Break";
	exit(1);
	}
	
	
	
	cout << "Multiplication of matrix";
	cout << endl;
		
	for(int i=0;i<column;i++)    
	{    
	for(int j=0;j<row2;j++)    
	{    
	rslt[i][j]=0;    
	for(int k=0;k< column ;k++)    
{    
	rslt[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
	
	
for(int i=0;i<column;i++)    
{    
for(int j=0;j< row2;j++)    
{ 
cout<<rslt[i][j]<<" ";    
}    
cout<<"\n";    
}    
	
	
}
