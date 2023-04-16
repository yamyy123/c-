#include <bits/stdc++.h>
using namespace std;
class myname{
    protected:
    int protected_variable;
    private:
    int private_variable;
    public:
    myname()
    {
        protected_variable=10;
        private_variable=20;
    }
   friend class f;
    
};

class f{
    public:
    void func(myname&obj)
    {
        cout<<"protected variable: "<<obj.protected_variable<<endl;
        cout<<"Private variable: "<<obj.private_variable<<endl;
    }
};

int main()
{
    myname obj;
    f fri;
    fri.func(obj);
    return 0;
}
