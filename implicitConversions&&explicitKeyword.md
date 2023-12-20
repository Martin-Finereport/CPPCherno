### implicit convsersions
```
class Entity
{
private:
    std::string m_Name;
    int m_age;    
public:
    Entity(std::string name)
    :m_Name(name), age(10){};
    Entity(int age)
    :m_Name("unknow"), m_age(age){};
}

    // 隐式转换 为 entity构造函数
   Entity a = Entity(22);
   Entity b = std::string("dasd");
   Print(Entity(2));
   Print(std::string("dasd"));

   // 可以用explcit关键字 强制声明必须调用构造函数, 禁用隐式
```


### explicit keyword
```
    // 隐式转换 为 entity构造函数
   Entity a = Entity(22);
   Entity b = std::string("dasd");
   Print(Entity(2));
   Print(std::string("dasd"));

   // 可以用explcit关键字 强制声明必须调用构造函数, 禁用隐式
```

### operators
operator overloading
operators are just functions


```
// demo
type operator+() {

}

```

### this keyword
inside class
**is a pointer** the current instance object
指针的属性调用 operator 是 -> 底层应该是用了 dereference
不要在成员函数中, 使用delete this



### arrow operations
```
void arrowFunc()
{
    Entity* ptr = new Entity(5);
    // (*ptr).getName(); //这里的arrow operation就相当于做了解引用
    ptr->getName();
}
```

