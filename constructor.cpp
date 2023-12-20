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




// copying and copy constructors
// String demo
class String
{
private:
    unsigned int m_Size;
    char* m_Buffer;  // char pointer
public:
    String(const char* string) 
    {
        m_Size = strlen(string); // C 
        m_Buffer = new char[m_Size + 1]; // null termination character
        memcpy(m_Buffer, string, m_Size + 1);
    }
    // copy constructor
    String(const String& other)
        : m_Size(other.m_Size)
    {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    //  String(const String& other) = delete ---- 禁止拷贝
    ~String()
    {
        delete[] m_Buffer;
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}


void functionCopyConstrucotr()
{
    String m = "dasd";
    String b = m; // 这里只是浅拷贝, m_Buffer的指针也拷贝了, 两个指针指向同一块buffer内存, 然后析构的时候, m的销毁了, 到b的时候就报错了

    //
    std::cout << m << std::endl;
    std::cout << b << std::endl;
}


// memcpy,, strcpy


int main()
{
    functionCopyConstrucotr();
    // std::cout << sizeof(Entity) << std::endl; // 8
    // std::cout << sizeof(Player) << std::endl; // 16

};




