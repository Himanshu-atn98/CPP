#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"Ujjain"<<endl;
}
};
class bbb:public aaa
{
public:
void tom()
{
cout<<"Indore"<<endl;
}
};
class ccc:public aaa
{
public:
void joy()
{
cout<<"Dewas"<<endl;
}
};
class ddd:public bbb,public ccc
{
public:
void john()
{
cout<<"Bhopal"<<endl;
}
};
int main()
{
ddd d;
d.sam();
return 0;
}