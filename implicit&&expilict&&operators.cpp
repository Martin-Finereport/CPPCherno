#include <string>
#include <iostream>
class Entity
{
private:
    std::string m_Name;
    int m_age;    
public:
    Entity(const std::string& name)
    :m_Name(name), m_age(10){};

    explicit Entity(int age)
    :m_Name("unknow"), m_age(age){};

    std::string getName() const {
        return m_Name;
    }
};


void Print(const Entity& e)
{
};


// arrow operations
void arrowFunc()
{
    Entity* ptr = new Entity(5);
    // (*ptr).getName(); //这里的arrow operation就相当于做了解引用
    ptr->getName();
}

//// 1. demo 1
class ScopedPtr
{
private:
    Entity* entity;
public:
    ScopedPtr(Entity* entity)
        : entity(entity)
    {
    }

    ~ScopedPtr() 
    {
        delete entity;
    }

    Entity* GetObj() {
        return entity;
    }

    Entity* operator->() {
        return entity;
    }
};


//// 2. demo2
void demo2()
{
    struct vector3
    {
        float x, y, z; // 计算变量存储的偏移量
    };

    int offest = (int)&((vector3*)nullptr)->y;
    std::cout << "offest: y" << offest << std::endl;
}

int main() {
    // 隐式转换 为 entity构造函数
   Entity a = Entity(22);
   Entity b = std::string("dasd");
   Print(Entity(2));
   Print(std::string("dasd"));

// arrow operation demo1
   ScopedPtr entity = new Entity(5);
//    entity.GetObj()->getName();
   entity->getName(); // override the default arrow operation

   // 可以用explcit关键字 强制声明必须调用构造函数, 禁用隐式

}

