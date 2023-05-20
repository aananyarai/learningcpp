#include <iostream>

using namespace std;

  int main ()
  {      
     cout<< "Enter any 10 numbers under 100 . "<< endl;
     
     int myNumbers[10];
      for (int i=1; i<10; i++) {  
          cin>> myNumbers[i];
      }
	  for(int i=1;i<=10;i++){
		  cout << myNumbers[i] << endl;
	  }
     
     return 0;
  }
