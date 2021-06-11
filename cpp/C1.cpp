
#include <iostream>
#include <string>
#include "H1.hpp"
#include <math.h>

using namespace std;

float profit = 525;

int main(){
  Plant putins_fart;
  Plant olkiluoto;
  Loan ECB;
  float duration;

  putins_fart.init("Natural Gas", 1000, 1000, 40);
  olkiluoto.init("Nuclear", 5000, 1600, 60);

  cout << "input the duration of loan" << endl;
  cin >> duration;

  cout << ECB.rate(duration, putins_fart.initial_investment) << endl;

  cout << pow(2, 3) << endl;

  return 0;
}