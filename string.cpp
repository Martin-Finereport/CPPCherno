#include <string>

#include <iostream> //尽管iostream中已经有了string的定义 
// 但是我们还是要引入string 因为这里面重载了 输出流对于string的输出
using namespace std::string_literals;

// pass string parameters, use refrence, ensure no extra memory was used
void printStr(const std::string& str) { //这里因为只读 所以设了const
    std::cout << str << std::endl;
}

int main() {
    std::string str = "cherno"; // const chat[7]
    // 不能直接加
    // 1
    str += "addStr"; // 这里的+=被string重载了
    // 2
    std::string str = std::string("cherno") + "dsadsa";  // 
    bool contains = str.find("no") != std::string::npos;

    std::string name = "cherno"s + "hello";

    const char* example = R"(Line1
    Line2
    Line3
    Line4
    )";

    const char* name = u8"Cherno";// utf-8
    const wchar_t* name2 = L"cherno";
    // 在 C++ 中，wchar_t 的大小可以根据编译器和平台而变化，通常是 2 或 4 个字节。
    // wchar_t 主要用于处理 Unicode 字符和其他宽字符集。与普通的 char 类型不同
    // ，wchar_t 可以表示更多的字符，包括非拉丁字符、表情符号等。这在需要处理国际化和多语言文本时非常有用。

    const char16_t* name1 = u"好";// utf-16
    const char32_t* name3 = U"好";// utf-32


// char* str2;
// strlen(str2); // C风格的长度函数
}

