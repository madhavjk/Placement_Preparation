/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter an integer number: ";
	cin>>num;
	
	if(num%2==0)
		cout<<num<<" is an EVEN number."<<endl;
	else
		cout<<num<<" is an ODD number."<<endl;
	
	return 0;
}
