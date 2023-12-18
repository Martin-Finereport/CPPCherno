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



## smart pointers
auotmate the heap allocated new and delete process

### unique pointer
a scoped pointer
can not be copied
```
#include <meomry>
{
    std::unique_ptr<Entity> entity(new Entity()); // 必须显示调用构造函数
    std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // exception safe, in case pointer is null;
    entity->xxxx;
}
```


### shred pointer
reference counting --- 引用计数 到0 的时候 就会销毁(也是通过scope)
```
#include <meomry>
{
    std::shared_ptr<Entity> e0;
    std::weak_ptr<Entity> e1;
    {
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();

        // 推荐使用make_shared而不是new的原因
        // 性能优化： std::make_shared 在内部进行了优化，它会一次性分配内存来存储对象和控制块
        //（用于跟踪共享指针的引用计数等信息）。而使用 new 创建 std::shared_ptr 时，会分别进行对象和控制块的内存分配，可能导致额外的开销。
        e0 = sharedEntity;
        e1 = sharedEntity;
    }// 引用计数减1
}// 引用计数减1--回收内存

```
#### weak pointer
对于shared pointer的引用, 不会增加计数, 不会对销毁有影响, 就类似引用





