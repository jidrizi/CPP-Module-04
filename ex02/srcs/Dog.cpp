/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:45:16 by jidrizi           #+#    #+#             */
/*   Updated: 2025/06/16 13:26:58 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->dogBrain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		this->dogBrain = src.dogBrain;
	}
	return (*this);
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << this->getType() << ": Bark Bark!" << std::endl;
}

void	Dog::testDogBrain() const
{
	std::cout << std::endl << "[Dog's brain is being tested]" << std::endl;
	for (int i = 0; i < 99; i++)
		this->dogBrain->setIdea(i, "Must chase tennis balls immediately");
	this->dogBrain->setIdea(99, "I finally got the tennis ball!");
	this->dogBrain->printIdeas();
}