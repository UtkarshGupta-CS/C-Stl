#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
  return a + b;
}
int main()
{
  int x = 10;
  int y = 20;

  float a = 10.2;
  float b = 20.9;

  cout << add<int>(x, y) << endl;
  cout << add<float>(a, b) << endl;
}
