#include <ostream>

int functionInt()
{
    static int i; // scope只有在这个function才能获取, 但是因为是static, 存续周期是程序的存续周期
    i++;
    return i;
};

// 应用---单例模式
class Singleton
{
private:
    static Singleton* s_instance;
public:
// 局部静态变量
    static Singleton& Get2()
    {
        static Singleton instance;
        return instance;
    }
    //
    static Singleton& Get() { return *s_instance; }

    void Hello() {}
};

// 在C++中，类的静态成员变量（包括静态成员函数）需要在程序的数据段分配内存，并在程序运行之前进行初始化
// 在C++11及之后的标准中，局部静态变量的初始化是线程安全的, 所以也可以用 局部静态变量初始化
Singleton* Singleton::s_instance = nullptr;

int main()
{
    Singleton::Get().Hello();
}