// cout is object of ostream class
// cin is object of istream class
// a friend function is function that has  been given a special grant to 
//access private and protected members
#include <iostream>
using namespace std;
class Test{
    int x;
public:
    Test(int val){
        x=val;
    }
    void print(){
        cout<<"value is : "<<x<<endl;
    }
    friend istream& operator >>(istream & input,Test &t);
    friend ostream& operator <<(ostream & output,Test &t);
};

/*
 Why these overloading can't be part of member function?
Ans: because we are overloading >> for class istream 
   so we cant make it member function of Test
 Why they are friend functions?
 Ans : to acces the variable x from class test
*/ 

istream& operator >>(istream & input,Test &t){
    input>>t.x;
    return input;
}
ostream& operator <<(ostream & output,Test &t){
    output<<t.x;
    return output;
}

int main(){
    Test t(100);
    cout<<t<<endl;
    // we have overloaded for istream and  ostream as 
    // cin and cout are objects of istream and ostream  they will work perfectly
    cin>>t;
    cout<<t;

}