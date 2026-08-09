#include<iostream>
using namespace std;

class Square
{
private:
float side;

public:
void input(){
    cout<<"Enter side:";
    cin>>side;
}
float area()
{
    return side*side;
}
float perimeter()
{
    return 4*side;
}
void display()
{
    cout<<"Area="<<area()<<endl;
    cout<<"Perimeter="<<perimeter()<<endl;
}
};

int main()
{
    Square s;

    s.input();
    s.display();

    return 0;
}