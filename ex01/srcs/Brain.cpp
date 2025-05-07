/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:33:31 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 19:21:59 by jidrizi          ###   ########.fr       */
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
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		if (src.ideas[i].length() > 0)
			this->ideas[i].assign(src.ideas[i]);
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
	for (int i = 1; i <= 100; i++)
	{
		if (!this->ideas[i - 1].empty())
			std::cout << "Idea " << i << ": " << this->ideas[i - 1] << std::endl;
	}
}
