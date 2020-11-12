//
//  main.cpp
//  46-模板
//
//  Created by 王潇 on 2020/11/12.
//

#include <iostream>
#include "Point.hpp"

using namespace::std;

template <typename T> T add(T a, T b) {
    return a + b;
}


int main(int argc, const char * argv[]) {
    
    int a = add(3, 3);
    
    cout << a << endl;
    
    
    
    Point p = Point(10, 20);
    Point p2 = Point(20, 30);
//    Point p3 = p + p2;
    Point p3 = add(p, p2);
    cout << p3 << endl;
    
//
//    cout << "x:" << p.getX() << " y:" << p.getY() << endl;
//    cout << "x:" << p2.getX() << " y:" << p2.getY() << endl;
//    cout << "x:" << p3.getX() << " y:" << p3.getY() << endl;
    
    return 0;
}
