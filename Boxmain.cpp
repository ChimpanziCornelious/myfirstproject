#include "Box.h"
#include <iostream>
int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double Volume = 0.0;

    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    Volume = Box1.GetVolume();
    cout << "Volume of Box1 :" << Volume <<endl;

    Volume = Box2.GetVolume();
    cout << "Volume of Box2 :" << Volume <<endl;

    Box3 = Box1 + Box2;
    Volume = Box3.GetVolume();
    cout << "Volume of Box3 : " << Volume <<endl;
    return 0;
}