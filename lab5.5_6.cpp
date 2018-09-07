//include the library
#include <iostream>
using namespace std;

//mention the function
int main()
{	
	int size ;
	cout << "Please input your desired side length for mirrored rhombus star pattern:" << endl; 
	//read the input value
	cin >> size;
	for(int i = 0; i < size ; i ++)
	{
		for (int j=0; j < i ; j++)
		{	
			cout << "  " ;
		}
		for (int k= 0 ; k < size ; k++)
		{
			cout << "* " ;
		}		
	cout << endl;
	}
//end the program
return 0;
}
