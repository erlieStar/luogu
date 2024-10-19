#include <iostream>
#include <string>

int main(void)
{
    std::string str = "   niel loves liyw   !  ";
    std::cout << "str: |" << str << "|" << std::endl;
    str.erase(0, str.find_first_not_of(" "));
    std::cout << "lef: |" << str << "|" << std::endl;
    str.erase(str.find_last_not_of(" ")+1);
    std::cout << "rig: |" << str << "|" << std::endl;

    return 0;
}