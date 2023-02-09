#include <iostream>
using namespace std;

int main() {
	
	int x; //threshold
	int y; //active bits per second
	bool result;
	
	cin >>x >>y;
	
	result = ((x < y) || (x == y)) ? true:false;
	
	if(result)
	    cout <<"Yes" <<endl;
	    
	else
	    cout <<"No" <<endl;
	
	return 0;
}
