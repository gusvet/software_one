//-------------------------------------
// this is a program that uses the sleep function
// also i want to measure the time.
// so i need another function to do that
//-------------------------------------

#include <iostream>
#include <windows.h> //this is for using the win api sleep
#include <ctime>// include this header for the time function


using namespace std;

int main()
{

  int result=0;
  int calc_result=0;
  int num_1 = 0;
  int num_2 = 0;
  int start_s=0;
  int stop_s=0;

  srand (time(NULL));

   num_1 = rand()% 10;
   num_2 = rand()% 10;




  //this is for the multiplication time
  cout << num_1 << " x " << num_2 << endl;

  start_s=clock(); //this starts the clock
  cin >> result;
  stop_s=clock(); // this stops the clock
  cout << "time it took to answer: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << " seconds" << endl;

  calc_result = num_1 * num_2;

  //check the result to see if it is right
  if (result == calc_result)
  {
	  cout << "result is right" << endl;
  }
  else
  {
	cout << "result is wrong"  << endl;
  }


 //cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << " ms" << endl;














 return 0;
}
