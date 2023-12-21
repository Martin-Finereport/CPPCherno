## Macros


### preprocessing stage
unlike template which is in compile time, the macro replace happens in preprocess stage

### complie mode (是这么叫么?)
debug mode
打印各种日志以供调试

release mode
strip uncessary code

Marco换行
```
#define int main() \
{ \
  LOG(x); \
}
```
1. ‘\’ 后面不要加空行
2. 其实就是会解析换行, 直接拼成一行, 所以最后一行 '}' 不用加'\'
3. 