#include <iostream>

using namespace std;

class GfG
{

public:
    static int i;

    GfG(){
        // do nothing
    };
};

int GfG::i = 2;

int main()
{
    GfG object1;
    GfG object2;

    object1.i = 2;
    object2.i = 3;
    
    cout << object1.i << " " << object2.i << endl;
    GfG obj;
    cout << obj.i << endl;
    return 0;
}
