/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:50:57 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 15:36:23 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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
};