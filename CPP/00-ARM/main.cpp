//
//  main.cpp
//  00-ARM
//
//  Created by 王潇 on 2020/11/16.
//

#include <iostream>

/// 通过Apple提供的System Call Table 可以查出ptrace的编号为26
/// 生成汇编代码
//clang -S -arch arm64 -isysroot `xcrun --sdk iphoneos --show-sdk-path` hello.c

//int add(int a, int b) {
//    return a + b;
//}

int double_num(int a) {
//    __asm__ volatile (
//                      "lsl x0, x0, 1\n"
//                      "str x0, [sp, #12]\n"
//    );
    return a;
}

int main(int argc, const char * argv[]) {
    int a = double_num(2);
    printf("a * 2 = %d", a);
    return 0;
}
