/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:58:31 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:56:33 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {}
ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  std::cout << "ScavTrap " << name << " assigned from " << other.name << "!"
            << std::endl;
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  return *this;
}

void ScavTrap::attack(const std::string& target) {
  if (energyPoints > 0 && hitPoints > 0) {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
  } else {
    std::cout << "ScavTrap " << name
              << " cannot attack due to insufficient energy or hit points."
              << std::endl;
  }
}

void ScavTrap::guardGate() {
  if (energyPoints > 0 && hitPoints > 0) {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!"
              << std::endl;
    energyPoints--;
  } else {
    std::cout
        << "ScavTrap " << name
        << " cannot guard the gate due to insufficient energy or hit points."
        << std::endl;
  }
}