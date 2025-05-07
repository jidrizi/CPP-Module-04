/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:43:58 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 16:48:29 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*dogBrain;
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		Dog	&operator=(const Dog &src);

		void	makeSound() const;
		void	testBrain() const;
};