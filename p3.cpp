#include<iostream>
using namespace std;

class Temperature
{
private:
float celsius,fahrenheit;

public:
void input(){
    cout<<"Enter Temperature in Celsius:";
    cin>>celsius;
}
void convert()
{
    fahrenheit=(9.0/5.0)*celsius+32;
}
void display(){
    cout<<"Celsius="<<celsius<<endl;
    cout<<"Fahrenheit="<<fahrenheit<<endl;
}
};
int main()
{
    Temperature t;

    t.input();
    t.convert();
    t.display();

    return 0;
}