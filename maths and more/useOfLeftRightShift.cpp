#include <iostream>
using namespace std;

int main()
{
    cout<< (13>>1)<<endl;   //right shift divides by 2
    cout<< (13>>2)<<endl;   //here it will divide 13 by 2 two times or 2^2
    cout<< (13<<1)<<endl;   //left shift multipies by 2
    cout<< (13<<2)<<endl;   //here it will multiply by 2 two times or 2^2
    return 0;
}
