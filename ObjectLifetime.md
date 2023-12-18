## stacks
scope ---  class, function, curly brackets
the stack memory gets freed as soon as we get out of scope


```
int* CreatedArray()
{
    int array[50];
    return array;
}
// CreatedArray()结束之后 stack上的 array就会被清除
```
## heap
smart pointer, uique pointer 的简易实现
```
class UniquePtr
{
private:
    Entity* m_ptr;
public:
    UniquePtr(Entity* ptr)
        : m_ptr(ptr)
    {
    }

    ~UniquePtr()
    {
        delete m_Ptr;
    }
}

{
    UniquePtr m = new Entity();
}
// 利用stack的scope特性创造一个类似智能指针的效果
```