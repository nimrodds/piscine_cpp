#include "ClapTrap.hpp"

void    ClapTrap::attack(const std::string& target)
{
    std::cout << this->Name << " attack " << target << ", causing " << this->Damage << " points of damage" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int damage)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " is already dead..." << std::endl;
        return ;
    }
    this->EnergyPoint -= damage;
    if (this->EnergyPoint < 0)
        this->EnergyPoint = 0;
    std::cout << this->Name << " has taken " << damage << " points of damage" << "--- EnergyPoint : " << this->EnergyPoint << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't use repair, he is already dead..." << std::endl;
        return ;
    }
    this->EnergyPoint += amount;
    std::cout << this->Name << " is repaired of " << amount << " points" << "--- EnergyPoint : " << this->EnergyPoint << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
    this->Name = str;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->Damage = 0;
    std::cout << "The ClapTrap " << this->Name << " constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "The ClapTrap " << this->Name << " destructor is called" << std::endl;
}
