//
//  Point.cpp
//  46-模板
//
//  Created by 王潇 on 2020/11/12.
//

#include <iostream>
#include "Point.hpp"

void test(void) {
    
};

ostream &operator<<(ostream &cout, const Point &point) {
    return cout << "(" << point.m_x << ", " << point.m_y << ")";
}
