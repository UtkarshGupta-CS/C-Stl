#include <iostream>
#include <set>

using namespace std;

int main(){
    multiset<int> s;

    for(int i=0;i<10;i++){
        s.insert(10-i);
    }

    multiset<int>::iterator it;
    it=s.find(6);

    s.insert(1);
    s.erase(it);

    for(multiset<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
}