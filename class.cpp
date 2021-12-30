#include<iostream>

using namespace std;


	
class workFlow {

    public : 
             string name;
             int files;

    workFlow (string Name,int Files){
        name = Name;
        files = Files;
    }
};
    int main() {
        workFlow info('Jude', 100);
        return 0;
    }


