#include<iostream>
#include<string>
using namespace std;
    // In diamond problem ek derived class kisi ek class ko 2 baar inherite karleti hai 
    // Ex :- B inherited A and C inherited A -> D inherited B and C both. To yaha pe D ke pass
    // 2 baar A ki properties and instances aagaye hai and when we call any variable of A through D
    // compiler confuse ho jata hai ki B ka variable call hua ya C ka.
class A{
    public:
        int aKaVariable;
        A(){
            cout<<"A ka Constructor call hua"<<endl;
        }
};
// To fix this problem we can use of Virtual class 
class B : virtual public A{ 
    public: 
        int bKaVariable;
        B(){
            cout<<"B ka Constructor call hua"<<endl;
        }
};
// we can also fix this by using scope resolution oprator(::) intead of virtual class
// we just have to specify like this when we use instances of A in class D
//                 cout<<B::aKaVariable<<endl;
// but virtual class is more convinent
class C : virtual public A{ 
    public:         
        int cKaVariable;
        C(){
            cout<<"C ka Constructor call hua"<<endl;
        }
};

class D : public B, public C{
    public:
        int dKaVAriable;
        D(){
            cout<<"D ka Constructor call hua"<<endl;
        }
        void show(){
            cout<<aKaVariable<<endl;
        }
};
int main(){
    D obj;
    obj.aKaVariable = 10;
    obj.show();
}