#include <iostream>
using namespace std;

int main()
{
	
	int a[3][3];
	int b[3][3];
	
	int row, column;
	
	cout << "Enter rows ";
	cin >> row;
	
	cout << "Enter Columns ";
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


	cout << "Enter Second Matrix Number";
	for(int h = 0; h< row; h++) 
	for(int k = 0 ; k < column; k++)
	{
	cout << endl;
	cin >> b[h][k];
	}
	
	
	
	for(int i = 0 ; i < row; i++)
	{
	for(int j = 0 ; j < column; j++)
	cout << b[i][j] << " ";
	cout << endl;
	}
	
	
	
	cout << "Addition of matrix";
	cout << endl;
	for(int itr = 0; itr < row; itr++)
	
	{
	
	for(int c = 0; c < column; c++) 
	cout << a[itr][c] + b[itr][c] << " ";
	cout << endl;
	}
}
	
	
	
	
	
