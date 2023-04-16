#include <bits/stdc++.h>
using namespace std;
class myname{
    protected:
    int protected_variable;//normally we cannot able to declare a variable inside a class so y we have created here constructors.
    private:
    int private_variable;//data members
    public:
    myname()/*this one is called as an constructor(special member function used to initialize values).it is executed normally whenever an object of class is created*/
    {
        protected_variable=10;
        private_variable=20;
    }
   friend class f;//this will help to access the private and protected part of the myname class to global functions (or) other classes.
    
};
/*we need to declare friend class or friend function inside the base at the class either it is private,protected,public for all it will work the same.*/
class f{
    public:
    void func(myname&obj)//here we are recieving the base class object as an argument to access it data members and member functions
    {
        cout<<"protected variable: "<<obj.protected_variable<<endl;//accessing variable from myname class in friend class.
        cout<<"Private variable: "<<obj.private_variable<<endl;
    }
};

int main()
{
    myname obj;//object creation (before object creations when there is class defined no memory will be alloted only when you create object then only memory allocates).
    f fri;//object creation for the 
    fri.func(obj);//here we are sending the base class object as an argument to another class's function .
    //to access class data members we need to send it address as argument then only we will be able to access it.
    return 0;
}
