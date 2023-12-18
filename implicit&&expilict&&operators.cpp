#include <string>

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
};


void Print(const Entity& e)
{
};


int main() {
    // 隐式转换 为 entity构造函数
   Entity a = Entity(22);
   Entity b = std::string("dasd");
   Print(Entity(2));
   Print(std::string("dasd"));

   // 可以用explcit关键字 强制声明必须调用构造函数, 禁用隐式

}

