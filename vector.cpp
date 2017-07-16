#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v(10);

  for (int i = 0; i < v.size(); i++)
  {
    v[i] = i * 10;
    // cout<<v[i]<<endl;
  }

  cout << v.empty() << endl; //return boolean
  v.push_back(-1);           // add value in the end of array
  cout << v[10] << endl;

  v.resize(15);
  for (int i = 0; i < v.size(); i++)
  {
    // v[i] = i*10;
    cout << v[i] << endl;
  }

  vector<int> v1(v);
}
