//
//  Point.cpp
//  46-模板
//
//  Created by 王潇 on 2020/11/12.
//

#include <iostream>
#include "Point.hpp"

int Point::getX(void) {
    return m_x;
}

int Point::getY(void) {
    return m_y;
}

Point Point::operator+(const Point &point) {
    return Point(m_x + point.m_x, m_y + point.m_y);
}


void test(void) {
    
}

ostream &operator<<(ostream &cout, const Point &point) {
    return cout << "(" << point.m_x << ", " << point.m_y << ")";
}
