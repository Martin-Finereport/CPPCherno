#include <iostream>
#include <string>

using namespace std;

#define LOG(x) cout << x << endl;

class Player // 类 --- 或者说类型
{
    // private by default
public:
    int x, y;
    double speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }

};

// struct vs class 
// C 中并没有 class 但是有struct
// 用struct还是class, 只是个人习惯上的区别, 没有准确对错
// struct的默认visbility是public, class是private


// 个人习惯
// class比较适合复杂的逻辑实现, 继承
// struct比较适合用来当作简单的数据处理, 数据结构

int main() {
    Player player; //实例化 --- 对象
    player.x = 2;
    player.y = 3;
    player.speed = 0.5;
    player.Move(1, -1);
}

// 类的初始化
class EntityClass
{
private:
    std::string m_Nmae;
public:
    EntityClass():m_Nmae("unknow")
    {     
    };
    EntityClass(std::string& name):m_Nmae(name)
    {
    };
    std::string GetName() const
    {
        return m_Nmae;
    }
};

// 栈
void function() {
    EntityClass p;  // 此时已经初始化了, 相当于 EntityClass p = EntityClass();
    EntityClass* e;
    {
        std::string name = "eawea";
        EntityClass p(name); //
        e = &p;
        std::cout << p.GetName() << std::endl;
    }// 到这里 p已经跟随scope销毁了, e获取的就只是默认构造函数的unknown名字

    {
        std::string name = "eawea";   
        EntityClass* p2 = new EntityClass(name); // 开辟堆上的内存, 这里p2是一个指针
        e = p2;
        std::cout << p2->GetName() << std::endl; // 指针获取属性 -> 或者 (*p2).GetName()
    }
    std::cout << e->GetName() << std::endl;    // 此时还能获取e指向的p2的 name
    delete e; // 一个new对应一个delete
}