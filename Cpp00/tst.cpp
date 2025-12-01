#include <iostream>
#include <iomanip>
#include <cstring>


class Stdo
{
    private:
        const int a;
        const char *str;
    public:
        Stdo(): a(1) ,str(strdup("safia"))
        {
           
        } 
    void    printo(void)
    {
        std::cout<< a << "und" << str << std::endl;
    }
};

int main()
{
    Stdo obj;
    const char *str;

    str = strdup("hooopa");
    std::cout << "str: " << str<< std::endl;
    obj.printo();
}