## characters

C++默认处理的字符方式 就是 ASCII字符 utf-8 utf-16 utf-32 wide string ...

## string
string is just an array of characters
C的strig声明
```
const char* name = "Cherno";  string一旦声明不可改变, 是固定分配的内存块
内存中的显示是连续的一块, 并且紧接着有一个null termination character  00 告诉啥时候string终止

如果不声明终止符
char a[5] = {'a', 'b', 'v', 'd', 'v'}; // 这里没有终止符, 打印的时候就会越界, 会遇到栈守卫告诉你越界了
char a[6] = {'a', 'b', 'v', 'd', 'v', ‘\0’};
```  
std::string is just an array of chars, a char pointer

## string literals
```
const char name[] = "chrno";
// '\0' 被视为终止符 遇到此字符就会停止读取后续字符
const char* name = "dasdas";
```

string literals are stored in the read only area in memory
char* name = "cherno"; // 最好写 const
name[2] = "a"; // is fobidden

char name[] = "cherno";
name[2] = "a";//是可以的


