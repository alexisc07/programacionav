#include <cstdlib>
#include <iostream>
using namespace std;

class base
{
  public:
    virtual void f(){ cout << "f(): clase base " << endl;}
    void g() {cout << "g(): clase base " << endl;}
};

class Derivada1 : public base
{
  public:
    virtual void f(){cout << "f(): clase Derivada 1 " << endl;}
    void g() {cout << "g(): clase Derivada 1!" << endl;}
};

class Derivada2 : public Derivada1
{
  public:
    void f() {cout << "f(): clase Derivada 2 !" <<endl;}
    void g() {cout << "g(): clase Derivada 2 !" << endl;}
};

int main(int argc, char *argv[])
{
    base b;
    Derivada1 d1;
    Derivada2 d2;
    base *p;

    p = &b;   p->f();   p->g();
    p = &d1;  p->f();   p->g();
    p = &d2;  p->f();   p->g();
    system("PAUSE");
    return EXIT_SUCCESS;
}