/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:57:01 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:16:34 by lgrigore         ###   ########.fr       */
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
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& other);
  ~ClapTrap();
  ClapTrap& operator=(const ClapTrap& other);

  const std::string& getName() const;

  virtual void attack(const std::string& target);
  virtual void takeDamage(unsigned int amount);
  virtual void beRepaired(unsigned int amount);
};

#endif
