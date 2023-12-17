#include <iostream>

// something you promise not to change

const int MAX_AGE = 90;

const int* a = new int; // 不准改值
// *a = 2;

int* const b = new int;
// b = (int*)MAX_AGE; // 不准改指向


class Entity {
private:
    int m_x, m_y; // 如果是 int* m_x, *my 这样两个都才是指针
    int* m_ptr;
    mutable int var; // const修饰的函数 可以修改此变量
public:
    int get_x() const // 不改变成员变量 ---只读
    {
        var = 0; 
        return m_x;  
    }

    int get_and_modify_x()
    {
        m_x = 3;
        return m_x;
    }
    const int* const get_mptr() const // 1.不能改成员变量 2. 不能改指针指向, 3. 不能改内容
    {
        return m_ptr;
    }
};

void func(const Entity& a)
{
    // 这里const --- 意味着a的内容不能被改变 因为引用本身指向的是内容
    // 这就意味着调用的方法 也不能修改a的内容
    // a = Entity(); // 报错
    std::cout << a.get_x() << std::endl;
    std::cout << a.get_x() << std::endl;
    // std::cout << a.get_and_modify_x() << std::endl; // 这里会报错 因为此方法修改了 a
}

void funcon() {
    int x = 8;
    // = 意味着按照值传递 & 按照引用传递
    auto f = [=]() mutable 
    {
        x++; // =》 int y = x; y++; --并没有改变外面x的值
        std::cout << x << std::endl;
    };
    f();
}