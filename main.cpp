#include <iostream>
using namespace std;

int main() {
  const int MIN_VALUE = 30;
  const int MAX_VALUE = 80;
  double number;
  double result;



 do
  { 
   cout << "Input numbers to square. Input -1 to stop." << endl;
  cin >> number;


  result = (number * number);
  cout << " Square is " << result <<endl;
}
  while (number != -1);

 

  

  

}