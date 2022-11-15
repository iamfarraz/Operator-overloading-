// -,+,--,++,!
#include <bits/stdc++.h>
using namespace std;


class Point {
    int x,y;
    public:
    Point(int x1=0,int y1=0){
        x=x1,y=y1;
    }

    Point operator -(){
        return Point(-x,-y);
    }
    
    void print(){
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
};
int main(){
    Point p1(1,2);
 
    Point p2=-p1;// this will be overloaded as
    
    p2.print();
   

}