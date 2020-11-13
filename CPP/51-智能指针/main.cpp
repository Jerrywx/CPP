//
//  main.cpp
//  51-智能指针
//
//  Created by 王潇 on 2020/11/13.
//

#include <iostream>

using namespace::std;

class Person {
    
    int m_age;
    int m_height;
    
public:
    Person(int age, int height): m_age(age), m_height(height) {
        cout << "Person" << endl;
    }
    
    ~Person() {
        cout << "~Person" << endl;
    }
    
    void talk(void) {
        cout << "age: " << m_age << " -- height: " << m_height << endl;
    }
};

template <typename T>
class SmartPointer {
    
private:
    T *m_obj;
    
public:
    SmartPointer(T *obj): m_obj(obj) {
        cout << "构造智能指针" << endl;
    }
    ~SmartPointer() {
        if (m_obj == nullptr) {
            return;
        }
        delete m_obj;
    }
    Person *operator->() {
        return m_obj;
    }
};

int main(int argc, const char * argv[]) {
    
//    智能指针 类似于 weak
//    {
//        auto_ptr<Person> p(new Person(1, 2));
//        p->talk();
//    }
    
//    自定义智能指针
    {
        SmartPointer<Person> p(new Person(1, 2));
        p->talk();
    }
    
    cout << "end" << endl;
    
    
    return 0;
}
