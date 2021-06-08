#include <iostream>
#include <cmath> 
#include <iomanip> 

/*
Section 57 MAE-111
Group 5
William Desueza, George Chieffi, Fabiana Diez-Cianferoni
*/

using namespace std;

int main() {
  double mean, stdev, n, x, sum_x, sum_x_squared; 

  // User Interface
  cout << "****************************************************************************************************" << endl
      << "****                         Scores Mean and Standard Deviation Program                         ****" << endl
      << "**    This Program Calculates the Mean and Standard Deviation For a Set of User Entered Scores    **" << endl
      << "****************************************************************************************************" << endl;

  // Ask & Input
  cout << "\n\nPlease Enter the Total Number of Scores: ";
  cin >> n; 
  cout << endl << endl; 

  // Sum of Individual Score Values 
  for(int i = 1; i <= n; i++) {
    cout << "Enter the value of score " << i << ": "; 
    cin >> x; 
    sum_x += x; 
    sum_x_squared += pow(x, 2);
  }
  
  // Final Outputs
  mean = sum_x / n; 
  stdev = sqrt((n * sum_x_squared - pow(sum_x, 2)) / (n * (n-1)));
  
  cout << fixed << setprecision(4); 
  cout << "\n\nThe Average Score is: " << mean << endl;
  cout << "The Standard Deviation is: " << stdev << endl;
  cout << endl;

  cout << "Have a Nice Day!";
  return 0; 
}