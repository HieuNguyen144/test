#include <stdio.h>
typedef struct {

    int apple;
    int orange;

    
}data;


struct dog{

};
data sum(data E, data F)
{
    data K;
    K.apple = E.apple + F.apple;
    K.orange = E.orange + F.orange;

    return K;
}

data minusone(data I) {
    I.apple = I.apple - 1;
    I.orange = I.orange - 1;

    return I;
}

int main()
{
    data A ={3, 4};
    data B ={5, 6};
    data C;

    C = sum(A, B);

    A = minusone(A);
    //C.apple = A.apple + B.apple ; 
    //C.orange = A.orange + B.orange;
    printf("%d %d\n", A.apple, A.orange);

    return 0;

}