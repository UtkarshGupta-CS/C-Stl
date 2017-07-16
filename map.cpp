#include <iostream>
#include <map>

using namespace std;

int main()
{
    pair<char, int> x;
    map<char, int> m;

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        x.first = ch;
        x.second = (int)ch;

        m.insert(x);
    }
    map<char, int>::iterator it = m.begin();

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    it = m.find(98);
    cout << it->first << " " << it->second << endl;
    cout << "Finding the value" << endl;
    it = m.find('j');
    cout << (*it).second << endl;

    cout << m['x'];
}
