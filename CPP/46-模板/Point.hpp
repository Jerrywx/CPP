//
//  ttt.hpp
//  46-模板
//
//  Created by 王潇 on 2020/11/12.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

using namespace::std;

class Point {
 
    friend void test(void);
    friend std::ostream &operator<<(std::ostream &cout, const Point &point);
    int m_x;
    int m_y;
public:
    /// 构造方法
    Point(int x, int y): m_x(x), m_y(y){}
    
    int getX(void) {
        return m_x;
    }
    
    int getY(void) {
        return m_y;
    }
    
    Point operator+(const Point &point) {
        return Point(m_x + point.m_x, m_y + point.m_y);
    }
};

#endif /* Point_hpp */
