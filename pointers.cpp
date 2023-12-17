#include <iostream>
#include <string>

using namespace std;

#define LOG(x) cout << x << endl;

int main()
{
    // void* ptr = 0; // not a valid memeory address
    // // void* ptr = NULL;
    // // void* ptr = nullptr;
    // int var = 8;
    // string a = "dadas";

    // int* ptr1 = &var; // 告诉编译器确切的类型, 就是告诉编译器, 此变量占用的内存空间, 在这方天地操作即可
    // void* ptr2 = &a; // 这里没有告诉compiler 指针的类型, 想要改变此指针指向的数据 就会有问题---编译器不知道要改动多少内存
    // *ptr1 = 10; // dereference ---解引用 --- 获取指针指向的内存的值
    // LOG(*ptr1);
    // LOG(*ptr2); // 这里就会报错 因为是void指针, 去读取的时候, 不知道对应读取多少内存
    // cin.get();

// stack memory
    char* arr = new char[8];
    memset(arr, 0, 8); // 操作内存, 从arr 0地址开始 分配8个字节内存

    char** ptr2 = &arr; // 指针的指针 --- 存储指向 arr的指针的地址 --- 小端   64位
    char* ptr3 = arr;
    cin.get();
    int a = 8;
    delete[] arr;
}


