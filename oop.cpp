#include<iostream>

using namespace std;


	
class workFlow {

    public : 
             string name;
             string files;

  
//  	private : 
//  			  string t = 'test';
  	
  	
    workFlow (string x,string y){ 
        name = x;
        files = y;
    }
    
    
    void getInfo() {
		cout << "Name" << name  << endl;
		cout << "Files" << files  << endl;
	}
};




    int main() {
    	
    	workFlow info("BMW", "X5");
		

		info.getInfo();
    
    return 0;
    }


