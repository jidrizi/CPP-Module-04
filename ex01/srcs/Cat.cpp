/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:51:10 by jidrizi           #+#    #+#             */
/*   Updated: 2025/06/16 13:22:36 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->catBrain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		this->catBrain = src.catBrain;
	}
	return (*this);
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << this->getType() << ": Meow Meow!" << std::endl;
}

void	Cat::testCatBrain() const
{
	std::cout << std::endl << "[Cat's brain is being tested]" << std::endl;
	for (int i = 0; i < 50; i++)
		this->catBrain->setIdea(i, "Must chase Jerry immediately");
	for (int y = 50; y < 100; y++)
		this->catBrain->setIdea(y, "I got hit with my own hammer! I must scream now!");
	this->catBrain->printIdeas();
}