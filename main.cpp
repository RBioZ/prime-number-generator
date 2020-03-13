#include <iostream>
#include <stdlib.h>
#include <sstream> 

using namespace std;

int main(int argc, char** argv) {
	
	stringstream x(argv[1]);
	int y = 0; 
    x >> y; 
	
	for(int i = 1; i < y; i++){
		
		if(i % 2 == 1){
			cout<<i<<endl;
		}	
		
	}
	return 0;
}
