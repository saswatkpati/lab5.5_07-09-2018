//include the library
#include <iostream>
using namespace std;

//mention the function
int main()
{	
	int size ;
	//ask for input value
	cout << "Please input your desired side length for printing a hollow rhombus star pattern:" << endl; 
	//read the input value
	cin >> size;
	//running the loop structure
	for(int i = 0; i < size ; i ++)
	{
		for (int j=0; j <= size-i-1 ; j++)
		{
			cout << "* " ;
		}
	cout << endl;
	}
//end the program
return 0;
}


