#include<iostream>

using namespace std;


	
class workFlow {

    public : 
             string name;
             string files;

  workFlow (string x,string y){ 
        name = x;
        files = y;
    }
    
    
    
    void getInfo () {
    	cout << "Testtttttt";
	}
};
 
 int main() {
    	
    	workFlow info("BMW", "X5");
		info.getInfo();
    return 0;
    }
 

