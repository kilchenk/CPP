/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:13:03 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/16 13:52:59 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    // Animal *array[100];
    // for (int i = 0; i < 99; i++)
    // {
    //     if (i % 2 == 0)
    //         array[i] = new Dog();
    //     else
    //         array[i] = new Cat();
    //     array[i]->makeSound();
    // }
    // for (int i = 0; i < 99; i++)
    //     delete array[i];
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;

    // std::cout << "My tests!!" << std::endl;
    // const WrongAnimal *new_meta = new WrongAnimal();
    // const WrongAnimal *cat = new WrongCat();
    // std::cout << cat->getType() << " " << std::endl;
    // cat->makeSound();
    // new_meta->makeSound();

    // delete new_meta;
    // delete cat;

    return (0);
} 