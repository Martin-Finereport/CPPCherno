#include <iostream>
#include <string>
#include <array>
#include <vector>
struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z)
    {
    }

    // copy constructor
    Vertex(const Vertex& vertex)
       : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "copied" << std::endl;
    }
};


// << override
std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main()
{
    std::cin.get();
    std::vector<Vertex> vertices; // vector也是连续的内存, 当需要扩大的时候, 会做copy and move的动作,寻找另一块连续的内存
    // 这里不用传指针类型, 因为指针类型的内存存储是链式的
    // vertices.push_back({1, 2, 3});


    // 遍历
    // for (int i = 0; i < vertices.size(); i++)
    // {
    //     std::cout << vertices[i] << std::endl;
    // }

    // for (Vertex& c : vertices) // 引用 --- 省却不必要的拷贝
    // {
    //     std::cout << c << std::endl;
    // }

    // vertices.erase(vertices.begin() + 1); // erase里面得传一个iterator


    // 如何优化copy的行为
    vertices.push_back(Vertex(1, 2, 3));
    vertices.push_back(Vertex(4, 5, 6));
    vertices.push_back(Vertex(7, 8, 9));
}

template<typename T> 
void Print(T value)
{
    std::cout << value << std::endl;
}
// gets created when we actually call it
// the template does not exist until we call it --- 不过也看compiler MSVC是这样的, clang就不是

template<typename T, int N>
class Array
{
private:
    T m_array[N];
public:
    int GetSize() const {return N;}
};

void PrintArray(const std::array<int, 5>& data)
{
    
}

int main()
{
    Array<std::string, 5> array;
    array.GetSize();
    Print<int>(5);
}