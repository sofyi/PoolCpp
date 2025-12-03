#include <iostream>
class Zombie
{
    private:
        std::string Name;
    public:
        Zombie(std::string name);
        Zombie();
        void announce( void );
        ~Zombie();
};

int main() 
{
    Zombie *arr;
    
    arr = new Zombie[5];
  return 0;
}