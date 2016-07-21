#include<iostream>
using namespace std;
/*class base
{
public:
    virtual void fun()
    {
        cout<<"base class fun"<<endl;
    }
    void func()
    {
        cout<<"base class func"<<endl;
    }
};
class derived:public base
{
public:
    virtual void fun()
    {
        cout<<"derived class fun"<<endl;
    }
    void func()
    {
        cout<<"derived class func"<<endl;
    }
};
void f(base *b)
{
    b->fun();
}
int main()
{
    derived d;
    base b, *pb = &d, &rb = d;
    f(&b);
    f(&d);
    pb->fun();pb->func();
    rb.fun();rb.func();
    return 0;
}
*/
class base
{
    int x;
public:
    base(int i)
    {
        x = i;
        cout<<"base constructor"<<x<<endl;
    }
    virtual ~base()
    {
        cout<<"base destructor"<<x<<endl;
    }
};
class derived:public base
{
    int y;
public:
    derived(int i, int j):base(i),y(j)
    {
        cout<<"derived constructor."<<y<<endl;
    }
    ~derived()
    {
        cout<<"derived destructor."<<y<<endl;
    }
};
int main()
{
    base *pb = new base(10);delete pb;
    base *pd = new derived(10,20);delete pd;
    return 0;
}
