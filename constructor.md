# Constructor
### 初始化类
调用实例化的时候
调用类的静态方法不会初始化
每个类默认会有一个空的构造函数
如果没有分配默认值, 那么变量获取的就是原来在此内存上的值

### 保护和去除构造函数
```
class Log
{
public:
    Log() =  delete; // 删除
}

class Log
{
private:
    Log() {}; //私有化
}


class Log
{
public:
    Log() {};
    Log(int x, int y) // 重载
    {

    }
}
```


### destructor
析构函数对于 堆和栈上分配的内存都适用
函数出栈的时候, 手动delete的时候

用处: 手动清除在堆内存分配的空间


## inheritance
继承 A : 权限 B
继承和多态



### virtual functions
如果你想override, 就得在基类中声明virtual函数
虚函数 ---》 引入了动态分派 -- dynamic dispatch
需要通过vtable来实现编译

调用虚函数的开销
1. 创建的时候, 需要维护一个虚标=表
2. 使用的时候需要去寻找虚标上对应的函数

virtual 定义在基类中 // 相互制约
override 定义在重写的函数

### pure virtual function -- interface
```
virtual functionxxxxx = 0;
```
interface are just classes in CPP, but they can not be initialized

force the subclass who inhereits it, must implement that function

### visbility
可见性并不会对程序的运行状况和程序性能产生影响
private -- class default  --- only this enity can visit, ecpect for the friend element
protecd -- all subclass and the base class itself
public  --- struct default



### 初始化类成员
1. 必须按照类中变量声明的顺序声明

2. 功能性区别 --- 对于需要初始化的类来说
????






