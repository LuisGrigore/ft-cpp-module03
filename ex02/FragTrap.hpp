/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:57:01 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:56:18 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 private:
 public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap& other);
  ~FragTrap();
  FragTrap& operator=(const FragTrap& other);

  void attack(const std::string& target);
  void highFivesGuys(void);
};

#endif
