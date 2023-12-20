## static outside the class
变量只在此translation unit内部link
only visible to that cpp file that you declared it in

extern 意味着你要在外部寻找此变量的链接定义

有点像类中的private, static代表只在此cpp文件生效, 而不会全局使用
## static inside the class
class内部的static 表示这是所有实例共享的一块内存
可以直接class::staticvariable读写
静态方法并没有获取类实例的权限, 只能获取静态的属性

## local scope static
lifecycle --- 变量在内存中的存续时间
scope  --- 能够访问此变量的范围

用处  --- 单例模式




### local scope static
static 提升的是varibale的lifetime
```



```