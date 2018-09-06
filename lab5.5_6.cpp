//include the library
#include<iostream>
using namespace std;

//include the function
	int main()
	{
	int n = 5, j, i;
	for(int i = 0; i < 5 ; i ++)
	 {
           //looping structure to print spaces
           for (int j=0; j < i; j++)
	   {
            cout << " ";
           }
	   //print 5 stars
	   {
            cout << "*****" << endl;
	   }
          }
	 cout << " This is Mirrored Rhombus Star Pattern." << endl;
	return 0;         
} 
