#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

    unordered_map<string, int> my_map;
    /// insert Element inside the map
    pair<string, int> p("abc",1);

    my_map.insert(p); //1.First way to insert
    my_map["def"]=2;  //2.Second way to insert (Better)

    /// find or excess elements
    cout<<my_map["abc"]<<endl;
    cout<<my_map.at("abc")<<endl;

    /// cout<<my_map.at("ghi")<<endl;   //throwing exception
    /// cout<<my_map["ghi"]<<endl;

    //check whether given key present or not
    if (my_map.count("abc")>0)
        cout<<true<<endl;
    else
        cout<<false<<endl;

    cout<<"Size: "<<my_map.size()<<endl;

    ///update
    my_map["abc"]=20;

    ///erase
    my_map.erase("abc");

    cout<<"Size: "<<my_map.size()<<endl;

    return 0;
}
