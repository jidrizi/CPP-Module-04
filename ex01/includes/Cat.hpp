/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:50:57 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 16:59:00 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*catBrain;
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		Cat	&operator=(const Cat &src);

		void	makeSound() const;
		void	testCatBrain() const;
};