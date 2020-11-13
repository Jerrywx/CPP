//
//  main.cpp
//  49-C++14
//
//  Created by 王潇 on 2020/11/13.
//

#include <iostream>

using namespace::std;

/// C++ 14 新特性
void cpp14Demo(void) {
    
    /// 1. 泛型 Lambda 表达式 支持 auto
    auto func = [](auto v1, auto v2) {
        return v1 + v2;
    };
    cout << func(11.1, 22.2) << endl;
    
    
    /// 2. 对捕获的变量进行初始化  不是 默认参数
    auto func2 = [a = 10]() {
        cout << a << endl;
    };
    
    func2();
}

/// C++ 17
void cpp17Demo(void) {
    
    /// 1. 可以进行初始化的 if、sitch 语句
    if (int a = 10; a  > 5) {
        a = 5;
        printf("---- a:%d\n", a);
    } else {
        a = 1;
    }
    
    ///
    switch (int a = 10; a) {
        case 5:
            printf("--------- 五\n");
            break;
        
        case 10:
            printf("--------- 十\n");
            break;
            
        default:
            break;
    }
    
}
    
int main(int argc, const char * argv[]) {
    
    cpp17Demo();

    return 0;
}
