#ifndef ZOMBI_HPP
#define ZOMBI_HPP

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

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif