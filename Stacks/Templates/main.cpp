#include <iostream>
using namespace std;

template<typename T, typename V>
class Pair{
    T x;
    V y;
public:
    T setX(T x){
        this->x=x;
    }
    V setY(V y){
        this->y=y;
    }
    T getX(){
        return x;
    };
    V getY(){
        return y;
    };
};

int main() {

    Pair<Pair<int, int>,int> p1;
    Pair<int,int> temp;
    temp.setX(10);
    temp.setY(20);
    p1.setY(20);
    p1.setX(temp);
    cout<<p1.getX().getX()<<endl;
    cout<<p1.getY()<<endl;


    return 0;
}
