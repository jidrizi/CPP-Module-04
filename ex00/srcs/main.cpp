/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:20:50 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/07 19:11:15 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Everything.hpp"

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// ... (Here is where the main stops being given to us and we have freedom to add to it)
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "[Now testing WrongAnimal and WrongCat]" 
		<< std::endl << std::endl;
	const WrongAnimal*	wa = new WrongAnimal();
	const WrongAnimal*	wc = new WrongCat();
	// const WrongAnimal*	wc = new WrongCat();
	// if you declare wc as WrongAnimal*, the eval sheet said it shouldn't print 
	// the wrong cat sound but the wrong animal sound

	
	std::cout << wc->getType() << " " << std::endl;
	wa->makeSound();
	wc->makeSound();

	delete wa;
	delete wc;
	return (0);
}