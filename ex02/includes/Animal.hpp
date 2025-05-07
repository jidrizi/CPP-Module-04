/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:22:09 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 17:17:56 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
		Animal();
	public:
		Animal(const Animal &src);
		virtual ~Animal();
		Animal	&operator=(const Animal &src);

		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif