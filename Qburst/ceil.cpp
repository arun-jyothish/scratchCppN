#include <iostream>	
#include <math.h>	
#include <algorithm>	
	
using namespace std; 

int main(int argc, char *argv[])
{
	
	float val = 3.5;
	cout<<"Enter a number (float): ";
	cin>>val;

	float mid = val/2;
	cout<<mid<<endl;
	int a =5, b=3;
	cout << greater<int>( a,b );
	/* cout<<floor(val)<<endl; */
	/* cout<<round(val)<<endl; */
	/* cout<<ceil(val)<<endl; */
	return 0;
}
