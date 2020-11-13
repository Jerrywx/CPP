//
//  main.cpp
//  50-异常
//
//  Created by 王潇 on 2020/11/13.
//

#include <iostream>

using namespace::std;

/// ============================================================================ 简单异常
void crash(void) {
    for (int i=0; i<9999999; i++) {
        try {
            int *p = new int[9999999];
        } catch(...) {
            cout << "产生异常 内存不足!" << endl;
            break;
        }
    }
    
    printf("===== \n");
}

int divide(int a, int b) {
    if (b == 0) {
        throw 123;
    }
    return a / b;
}

/// ============================================================================ 主动异常
void crash2(void) {
    
    int a = 10;
    int b = 0;
    
    try {
        int c = divide(a, b);
        cout << c << endl;
    } catch (int exception) {
        cout << "产生了异常！" << exception <<  endl;
    }

    cout << "end!" << endl;
}

/// ============================================================================ 异常嵌套
void func1(void) {
    throw -1;
}

void func2(void) {
    cout << "func2 - begin" << endl;
    func1();
    cout << "func2 - end" << endl;
}

void func3(void) {
    cout << "func3 - begin" << endl;
    try {
        func2();
    } catch (int exp) {
        cout << "出现异常: " << exp << endl;
    }
    
    cout << "func3 - end" << endl;
}

void func4(void) {
    cout << "func4 - begin" << endl;
    func3();
    cout << "func4 - end" << endl;
}

/// ============================================================================ 自定义 异常
void crash3(void) {
    
}

int main(int argc, const char * argv[]) {
    
    func4();
    
    return 0;
}
