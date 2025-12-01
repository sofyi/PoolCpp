/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:24:24 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/29 10:40:05 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

void	Contact::SetFirstName(std::string firstname) 
{
	FirstName = firstname;
}
void	Contact::SetLastName(std::string lastname) 
{
	LastName = lastname;
}
void	Contact::SetNicName(std::string nicname) 
{
	NickName = nicname;
}
void	Contact::SetPoneNumber(std::string phonenumber) 
{
	PhoneNumber = phonenumber;
}
void	Contact::SetDarkestSecret(std::string darkestsecret) 
{
	DarkestSecret = darkestsecret;
}
std::string	Contact::GetFirstName() const 
{
	return FirstName;
}
std::string	Contact::GetLastName() const
{
	return LastName;
}
std::string	Contact::GetNicName() const
{
	return NickName;
}
std::string	Contact::GetPhoneNumber() const
{
	return PhoneNumber;
}
std::string	Contact::GetDarkestSecret() const
{
	return DarkestSecret;
}

