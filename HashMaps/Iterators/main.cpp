#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<string, int> mymap;
    mymap["abc"] = 1;
    mymap["abc1"] = 2;
    mymap["abc2"] = 3;
    mymap["abc4"] = 4;
    mymap["abc5"] = 5;

    for (auto it=mymap.begin(); it!=mymap.end(); it++) {
        cout<<"Key :"<<it->first<<" Value: "<<it->second<<endl;
    }

    map<string, int> mymap2;
    mymap2["abc"] = 1;
    mymap2["abc1"] = 2;
    mymap2["abc2"] = 3;
    mymap2["abc4"] = 4;
    mymap2["abc5"] = 5;

    for (map<string,int>::iterator it=mymap2.begin(); it!=mymap2.end(); it++) {
        cout<<"Key :"<<it->first<<" Value: "<<it->second<<endl;
    }

    vector<int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);

    for(auto vt = v.begin(); vt!=v.end(); vt++ )
    {
        cout<<*vt<<endl;
    }


    //Erase using iterator
    unordered_map<string,int>::iterator it = mymap.find("abc");
    mymap.erase(it);

    //To empty the map;
    mymap.erase(mymap.begin(),mymap.end());
    cout<<mymap.size()<<endl;

    //find using iterator
    if(mymap.find("abc")==mymap.end()){
        cout<<"Not Present"<<endl;
    }else
        cout<<"Present"<<endl;


    return 0;
}
