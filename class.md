## 初始化类

### 栈
1. 栈上类的声明周期, 通常跟随作用域的消失而消失, 无需手动管理内存
2. 栈的大小通常不会很大, 所以要创建很大的类的时候, 还是用堆
```
```

### 堆
1. 采用new 创建一个类指针, 有一个new, 就得有一个delete来负责回收内存

### new
new returns a pointer.

new调用之后会根据之后的类型分配内存 --- 相当于 (type*)malloc(sizeof(type));
并且new还会调用构造函数
记住适用delete --- 底层是C的free
如果new的是数组, 那么delete[]

placement new --- 决定内存来自哪里
new(pointer) Type;
