# pointers



## raw pointers
an integer/number that stores a memory address
types does not matter
types are used for mauipulation for the memory, for reading and writing to the memory,
let the compiler know how many bytes need to occupy for this type, say int --- 4 bytes

## smart pointers


## reference
编译器在编译时将引用与被引用的对象关联起来。因此，引用不占用独立的内存空间

在内存中，引用通常被实现为指针。编译器可能使用指针来实现引用，但在使用引用时，我们不需要像指针那样使用解引用运算符 *。引用提供了一种更直观、更安全的访问已存在对象的方式

引用不是在运行时分配内存的实体，而是在编译时通过别名来访问已存在对象

编译器在生成机器代码时，通常会将引用直接替换为被引用对象的地址。这使得引用在访问对象时效率很高，类似于直接访问对象本身 --- 效率高

