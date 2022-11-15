// [],()
// Let use [] to assign and update values
#include <bits/stdc++.h>
using namespace std;


class Point {
    int arr[2];// arr[0]->x ,arr[1]->y
    public:
    Point(int x1=0,int y1=0){
        arr[0]=x1;
        arr[1]=y1;
    }

    // reference of interger because it will update that location's  value
    int& operator [](int pos){
        if(pos==0)return arr[0];
        if(pos==1)return arr[1];
        if(pos>1){
            cout<<"Out of bound"<<endl;
            exit(0);
        }
    }
    void print(){
        cout<<"x: "<<arr[0]<<" y: "<<arr[1]<<endl;
    }
};
int main(){
    Point p1(1,2);
    p1.print();
    p1[1]=0;// this will be overloaded as
    //p3= p1.operator+(p2)
    p1.print();
   

}