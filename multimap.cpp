#include <iostream>
#include <map>

using namespace std;

int main(){
    pair<char,int> x;
    multimap<char,int> m;

    for(char ch='a';ch<='z';ch++){
        x.first = ch;
        x.second = (int)ch;

        m.insert(x);
    }
    multimap<char,int>::iterator it=m.begin();
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    x.first='j';
    x.second=1000;
    m.insert(x);

    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    cout<<"Finding the value"<<endl;
    it=m.find('j');
    cout<<(*it).second<<endl;

    
}