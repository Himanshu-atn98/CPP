#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
w=e;
}
int getWattage()
{
return w;
}
}
int main()
{
Bulb g,t;
g.w=60;
g.setWattage(60);
cout<<"Wattage is:"<<g.getWattage()<<endl;
t.w=100;
t.setWattage(100);
cout<<"Wattage is:"<<t.getWattage()<<endl;
return 0;
}
