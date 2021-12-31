#include<iostream>

using namespace std;

class Table {
	private : 
	int table = 1;
	int i;
	
	public : 
	Table (int x){ 
        table = x;
    };
    
      void getTable () {
	for(i = 1; i <= 10 ; i++){
		showTable(i);
	};
	};
	
	void showTable (int iteration) {
		cout << table << "x" << iteration << "=" << table * iteration << endl;
	};
};

	int main(){
	int t = 0;
	cout << "Show Table Int" << endl;
	cin >> t;
	Table tbl(t);
	tbl.getTable();
	return 0;
}
