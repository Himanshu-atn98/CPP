#include<iostream>
using namespace std;
class Book;
class Toy
{
private:
int price;
public:
Toy()
{
this->price=0;
}
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return price;
}
friend int operator>(Book &,Toy &);
};

class Book 
{
private:
int price;
public:
Book()
{
this->price=0;
}
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return price;
}
friend int operator>(Book &,Toy &);
};

int operator>(Book &left,Toy &right)
{
return left.price>right.price;
}
int main()
{
Toy t;
t.setPrice(100);
Book b;
b.setPrice(200);
if(b>t)
{
cout<<"Book b is costlier than Toy t"<<endl;
}
else
{
cout<<"Book b is not costlier than Toy t"<<endl;
}
return 0;
}