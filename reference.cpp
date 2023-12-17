#include <iostream>
#include <string>

using namespace std;

#define LOG(x) cout << x << endl;


void incrementWithPtr(int* value)
{
    (*value)++; // dereference --- 由于++优先级高于解引用 , 所以得括起来
}

void incrementWithRef(int& value) // 引用类型
{
    value++;
}
int main()
{
    // 引用只是一个语法糖, 他只是对一个现存变量的引用, 是一个别名, 必须在声明的时候初始化
    // 他本身并不是一个新的变量, 他们并不真正占用内存??? 
    int a = 8;
    int& ref = a;
    ref++;
    LOG(a);
    incrementWithPtr(&a); // 取地址
    LOG(a);
    incrementWithRef(a);
    LOG(a);

    // 引用在存在的生命周期  只能指向同一个对象 并不能改变引用
    int b = 20;
    ref = b; // 只能是的 a =20, ref还是指向了a

    //想要改变指向 还是得指针
    int* ref2 = &a;
    *ref2 = 30;
    ref2 = &b; // 改变ref2的指向为b
    *ref2 = 50;
}