#include <iostream>



class Example
{
public:
    Example() {
        std::cout << "create entity" << std::endl;
    }
    Example(int a) {
        std::cout << "create entity wit" << a << std::endl;
    }
};

class Entity
{
public:
    int x, y;
    Example m_example;// 这里初始化了一次
public:
    Entity()
    : x(1), y(2), m_example(8)  // 这里 只会被初始化一次
    {
        int ac= 8;
        // m_example = Example(ac); // 这里又初始化了一次
    };
    ~Entity() {
        
    }

};

class Player : public Entity
{
public:
    char* name;

    void printNmame() {
        std::cout << *name << std::endl;
}
};


void func()
{
    Entity e;
} // 这里就会从栈上调用析构

int main()
{
    std::cout << sizeof(Entity) << std::endl; // 8
    std::cout << sizeof(Player) << std::endl; // 16
};




