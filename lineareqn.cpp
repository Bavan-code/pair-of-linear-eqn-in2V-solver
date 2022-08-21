#include <iostream>
using namespace std;

int main() {
  int x;
  int y;
  int z;
  int a;
  int b;
  int c;
  cout << "input a,b and c in form of (a)x+(b)y-(c)=0 \n ";
  cout << "Type X co efficient in first eqn.:";
  cin >> x;
  cout << "Type y co efficient in first eqn.:";
  cin >> y;
   cout << "Type constant in first eqn.:";
  cin >> z;
  cout << "Type Enter second eqns.: \n";
  cout << "Type X co efficient in second eqn.:";
  cin >> a;
  cout << "Type Y co efficient in second eqn.:";
  cin >> b;
  cout << "Type constant in second eqn.:";
  cin >> c;
  int sol = ( a*(-z)-x*(-c) )/(x*b-a*y);
  cout << "Y= "<< sol << "\n";
   int ans = ( y*(-c)-b*(-z) )/(x*b-a*y);
  cout << "X= "<< ans << "\n";
  return 0;
}
