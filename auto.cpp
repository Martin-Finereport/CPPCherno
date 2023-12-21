#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


char* getName()
{
    return "Cherno";
}

class Device
{

};
// if your type is relly long use auto

using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap2;
class DeviceList
{
private:
    std::unordered_map<std::string, std::vector<Device*>> a;
public: 
    const auto getDeviceListName () const
    {
        return a;
    }
};

int main()
{
    auto a = 5;
    std::string b = getName();  // implicit constructor
    

    std::cin.get();
}