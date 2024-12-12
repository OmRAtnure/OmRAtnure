#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
    complex(){
        real=0;
        img=0;
    }

    complex operator+(complex &obj){
        complex sum;
        sum.real=real+obj.real;
        sum.img=img+obj.img;
        return sum;
    }

    complex operator-(complex &obj){
        complex diff;
        diff.real=real-obj.real;
        diff.img=img-obj.img;
        return diff;
    }

    complex operator*(complex &obj)
    {
        complex multi;
        multi
        return sum;
    }

    friend ostream&operator<<(ostream &o,complex & obj);
    friend istream&operator>>(istream &i,complex & obj);
};

ostream &operator<<(ostream &o, complex &obj){
    o<<obj.real<<"+"<<obj.img<<"i";
    return o;
}

istream & operator>>(istream &i,complex&obj){
    cout<<"Enter real part: ";
    i>>obj.real;
    cout<<"Enter img part: ";
    i>>obj.img;
    return i;
}

int main(){
    complex c3,c1,c2;
    cout<<"Enter complex number"<<endl;
    cin>>c1;
    cout<<"Enter complex number"<<endl;
    cin>>c2;
    c3=c1+c2;
    cout<<"Complex number sum is: "<<c3;


 return 0;
}