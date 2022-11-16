#include <iostream>
using namespace std;
class Rupee
{
 int r;
 public:
 Rupee(int val=0){
    r=val;
 }
  void print(){
        cout<<"Rs."<<r<<endl;
    }
};
class Dollar{
    int d;
    public:
    Dollar(int val){
        d=val;
    }
    void print(){
        cout<<d<<"$"<<endl;
    }
    operator Rupee(){
        return d*80;
    }
};
int main(){
    Dollar d(5);
    Rupee r;
    r=d;
    d.print();
    r.print();
}