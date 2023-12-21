#include <iostream>
#include <string>

#ifdef PR_DEUG
#define LOG(x): std::cout << x << std::endl
#elif defined(PR_RELEASE)   // 注意这里 elif defined(xxxx)
#define LOG(x)
#endif




int main()
{
    std::cin.get();
}