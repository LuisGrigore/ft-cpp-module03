/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:57:01 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:50:21 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>

class ClapTrap {
 protected:
  std::string name;
  int hitPoints;
  int energyPoints;
  int attackDamage;

 public:
 ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& other);
  ~ClapTrap();
  ClapTrap& operator=(const ClapTrap& other);

  const std::string& getName() const;

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
