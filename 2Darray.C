/*
omar gonzalez
lab 10-2
2DArray.C
Purpose: This program allows you to enter students score for each test and calculate students average score for exams 
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE_STU = 5;
const int SIZE_TEST = 3;

void fillArray( int scores[][SIZE_TEST]);
void printArray ( const int scores[][SIZE_TEST]);
//Main Function

int main(){
  int scores[SIZE_STU][SIZE_TEST]; // creating 2D array

  fillArray(scores);
  printArray(scores);

  cout << endl;
  return 0; //end of program
}

/*
Function: Fill Array
Purpose: To Fill the array with the score of each student for each corresponding test#
*/
void fillArray( int scores[][SIZE_TEST]){
  for (int test = 0; test < SIZE_TEST; test++)
    {
      cout << "Enter the score for test #" << test +1 << endl;
      for (int students=0; students < SIZE_STU; students++)
	     {
	        cout << "student #" << students +1 << ":";
	         cin >> scores[students][test]; //enter scores for corresponding student
	     }
    }
}
/*
Function: printArray
Purpose: To print 2D array to user
*/
void printArray (const int scores[][SIZE_TEST])
{
  int total=0, total2=0; //initializing total and toal2 to 0 for printing purposes

  cout << endl; // creating a line for neatness and setting spaces between outputs
  cout << setw(10) <<  "Test #" << setw(10) << "student 1" << setw(10) << "student 2" << setw(10) << "student 3" << setw(10) << "student 4" << setw(10) << "student 5" << setw(10) << "Average" << endl;

  for( int test = 0; test < SIZE_TEST ; test ++ )
    {
      total=0;
      cout << setw(10)<<  test + 1;
      for (int student = 0; student < SIZE_STU ; student ++){
	         cout << setw(10) << scores[student][test];
	         total += scores[student][test];
	        }
      cout << fixed << setprecision(1) << setw(10) << (double) total/ SIZE_STU;
      cout << endl;
    }

    cout << setw(10)<< "average";
    for( int students=0 ; students < SIZE_STU ; students ++){
      total2=0;
      for( int test=0 ; test < SIZE_TEST ; test ++)
      	{
      	  total2 += scores[students][test];

      	}
      cout << fixed <<  setprecision(1) << setw(10) << (double) total2/ SIZE_TEST;
    }
}
