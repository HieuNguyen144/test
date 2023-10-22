#include <iostream>

using namespace std;

//global
int x = 5;

class Calculate
{

public:
    int num1 = 25;
    int num2 = 30;
    // static int num;

    int addition()
    {
        int result = num1 + num2;
        cout << result << endl;
        return result;
    }
};
Calculate Add;

void sum(int index)
{
    static int num;
    int num3 = 20;
    num3 += index;
    num += index;
    cout << "num1: " << num3 << endl;
    cout << "Num: " << num << endl;
}

void externStogare()
{
    extern int x;
    cout<<"value of global: "<<x<<endl;
    x = 2;
    cout<<"value of extern global: "<<x<<endl;
    x = 4;
    cout<<"value of extern global: "<<x<<endl;
}
int main()
{

    cout << "Hello World" << endl;

    Add.addition();

    for (int i = 0; i < 5; i++)
    {
        sum(i);
    }
    //local
    int x = 10;
    cout << "value of Global is : " << ::x << endl;
    cout << "value of local is : " << x << endl;

    externStogare();
    return 0;
}