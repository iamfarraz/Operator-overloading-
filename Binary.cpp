#include <bits/stdc++.h>
using namespace std;


class Point {
    int x,y;
    public:
    Point(int x1=0,int y1=0){
        x=x1,y=y1;
    }
    // in binary operator like a+b
    // a will be as return type 
    // b will be as arguments
    // return  is the result of that operation
    Point operator +(const Point &b){
        Point p2;
        p2.x=x+b.x;
        p2.y=y+b.y;
        return p2;
    }
    void print(){
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
};
int main(){
    Point p1(1,2);
    Point p2(3,4);
    Point p3=p1+p2;// this will be overloaded as
    //p3= p1.operator+(p2)
    p3.print();
   

}