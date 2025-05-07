/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:33:31 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 16:49:59 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &src)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "Index out of range" << std::endl;
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (!this->ideas[i].empty())
			std::cout << "Idea " << i << ": " << this->ideas[i] << std::endl;
	}
}
