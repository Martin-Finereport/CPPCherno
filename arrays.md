# Array
same type of data in a row
```
int example[5];
example[0] = 2;  //这里example实际上是一个指针变量
int* ptr = example;
example[2] = 5 ===> *(ptr + 2) = 5 // 这里2是指2个int型指针的offset, 也就是8bytes
===》 *(int*)((char*)ptr + 8) = 5


```

超越界限的访问 --- 在debug模式下, 编译器会报错
在release模式下, 可能就会产生越界访问的错误


#### 数组的大小
```
static const int size  = 5;
constexpr int size = 5; // 这两个都是编译时就知道的常量, 用在栈中为数组申请内存
```

### 间接寻址
堆内存分配的数组 --- 生命周期不同, 并且需要手动删除 --- 也叫动态分配--- 可以动态改变数组大小
栈上的内存跟随函数的生命周期消失 --- 也叫静态分配 --- 大小固定
```
int* arr = new int[5];

delete[] arr;

栈上的内存可以用 sizeof(example) / sizeof(int) --- 这里栈上分配内存的example数组指针大小是20
这里如果是堆内存的sizeof(arr) ---这里是int指针的4Bytes
```

## C++ array
1. 会做安全边界检查
2. 可以直接访问数组大小
std::array<int, 5> another; --> another.size()