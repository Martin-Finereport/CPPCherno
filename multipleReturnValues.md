   1. 引用的方式

```
std::string outputStr;
int outputInt;
void exampleFunc(const T& inParams, std::string& ouputStr, int& outputInt)
```
   2. Struct
   ```
   struct types 
   {
    xxxxx
    xxxxx
   }

   return {xxxx, xxxx}
   ```
   3. array
   ```
   std::string* pares()
   {
    return new string[]{output1, output2}
   }

   std::array<std::string, 2> pares()  // strores on the stack  -- #include <array>
   {
    return new std::array<std::string, 2>('1', '2')
   }

   std::vector<std::string> pares()  // strores on the heap
   {
    return std::vector<std::string>('1', '2')
   }
   ```

   4. tuple  --- #include<tuple>
   ```
   std::pair<> --- returnVariable.first
   std::tuple<>  ---  std::get<0>(returnVaribale)


   return std::make_pair(o1, o2)
   ```