#include<iostream> 
using namespace std;

class A{
  public:
  A(){
    cout << "1";
  }
  virtual ~A(){
    cout << "2";
  }
};

class B:public A {
  public:
  B(){
    cout << "3";
  }
  ~B()
  {
    cout << "4";
  }
};

int main(){
  A* obj;
  obj = new B;
  delete obj;
  obj = new A;
  delete obj;
  return 0;

}