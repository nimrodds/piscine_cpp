#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Constructor class Dog called" << std::endl;
    this->type = "Dog";
    this->dogBrain = new Brain;
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf mon gars" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor class Dog called" << std::endl;
    // delete[] this->dogBrain;
}

Dog::Dog(const Dog &d)
{
    this->type = d.getType();
}

Dog Dog::operator=(const Dog &d)
{
    if (this != &d)
    {
        this->type = d.getType();
    }
    return (*this);
}