#include <iostream>
using namespace std;
class Base {
 int y;
 public:
 Base(int val=0){
    y=val;
 }
  friend class Test; // to make private data members/functions accesible from test
};
class Test{
 int *x;
 public:
 Test(int val=0){
    x=new int(val);
 }
 void print(){
    cout<<"output: "<<*x<<endl;
 }
 // we are returning object with its refrence so that no new object is created
 Test& operator =(const Test& rhs){
    if(this!=&rhs){ // address  of rhs should not equal to address of this
        *x=*rhs.x;
    }
    return *this; // dereferencing because we are returning object not its pointer.
 }
// Assignment op overloading on different class objects
 Test& operator =(const Base& rhs){
     *x=rhs.y;
    return *this;
    }

 void setX(int val){
    *x=val;
 }
};
int main(){
    Test t1(10);
    Test t2;
    t2=t1;
    t1.setX(25);
    t1.print();
    t2.print();
    Base b;
    t2=b;
    t2.print();

}