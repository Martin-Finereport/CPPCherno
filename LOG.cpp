#include <iostream>
using namespace std;

class LOG{
public:
    enum Level { // 可以利用 : type 指定整形类型
        LEVEL_ERROR, LEVEL_DEBUG, LEVEL_INFO
    };
private:
    Level m_LOGLEVEL = LEVEL_INFO;
public:
    void segLogLevel(Level logLevel)
    {
        m_LOGLEVEL = logLevel;
    };
    void warningLog(char* message)
    {
        if (m_LOGLEVEL >= LEVEL_ERROR){
            cout << "[WARNING]: " << *message << endl;   
        }
    };
    void debugLog(char* message)
    {
        if (m_LOGLEVEL >= LEVEL_DEBUG){
            cout << "[DEBUG]: " << *message << endl;   
        }
    };
    void infoLog(char* message)
    {
        if (m_LOGLEVEL >= LEVEL_INFO){
            cout << "[INFO]: " << *message << endl;   
        }  
    };
};


int main()
{

}