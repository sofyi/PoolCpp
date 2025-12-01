/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:17:50 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/29 11:49:52 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	IndexContact = -1;
}

int checkData(std::string *input, bool is_phon)
{
	size_t First;
	size_t Last;

	if ((*input).empty())
		return (std::cout<< "input is empty" << std::endl, 1);
	if (is_phon)
	{
		First = (*input).find_first_not_of("0123456789");
		if (First != (*input).npos)
			return (std::cout<<"❌ error just number ❌"<<std::endl, 1);
		else if ((*input).size() > 12 || (*input).size() < 12)
			return (std::cout<<"❌ Error: You must entered 12 numbers ❌"<<std::endl, 1);
	}
	First = (*input).find_first_not_of(" \n\t");
	Last = (*input).find_last_not_of(" \n\t");
	if (First == (*input).npos)
		return (std::cout<<"❌ error syntax ❌"<<std::endl, 1);
	*input = (*input).substr(First, (Last - First + 1));
	return (0);
}

std::string	GetData(std::string msg)
{
	std::string input;
	
	if (std::cin.eof())
		return ("");
	while (true)
	{
		std::cout<< msg;
		if (!std::getline(std::cin, input))
			break;
		if ((!msg.compare("Enter Phone Number :") && checkData(&input, true)) || (checkData(&input , false)))
			continue;
		break;
	}
	return (input);
}
void PhoneBook::AddContact()
{
	std::string input;

	IndexContact++;
	input = GetData("Enter First Name :");
	if (!input.empty())
		Contacs[IndexContact % 8].SetFirstName(input);
	input = GetData("Enter Last Name :");
	if (!input.empty())
		Contacs[IndexContact % 8].SetLastName(input);
	input = GetData("Enter Nick Name :");
	if (!std::cin.eof())
		Contacs[IndexContact % 8].SetNicName(input);
	input = GetData("Enter Phone Number :");
	if (!std::cin.eof())
		Contacs[IndexContact % 8].SetPoneNumber(input);
	input = GetData("Enter Darkest Secret :");
	if (!std::cin.eof())
			Contacs[IndexContact % 8].SetDarkestSecret(input);
		
}
static void	PrintLin(std::string data)
{
	if (data.length() > 10)
		std::cout<< data.substr(0, 9) << ".|";
	else
		std::cout<< std::setw(10) << data << "|";
}
void	PhoneBook::PrintData()
{
	int i;

	i = 0;
	if (IndexContact < 0)
		return ;
	std::cout<< "---------------------------------------------"<<std::endl;
	std::cout<< "|     index|First Name| Last Name| Nick Name|"<<std::endl;
	std::cout<< "---------------------------------------------"<<std::endl;
	while (i < 8 && i <= IndexContact)
	{
		std::cout<<"|         " << i + 1 << "|";
		PrintLin(Contacs[i].GetFirstName());
		PrintLin(Contacs[i].GetLastName());
		PrintLin(Contacs[i].GetNicName());
		std::cout<< std::endl;
		i++;
	}
}	

void	PhoneBook::SerchContact()
{
	std::string	input;
	int i;
	
	if (IndexContact < 0)
		std::cout << "❌ <----------- empty list --------> ❌" << std::endl;
	else
	{
		while (1)
		{
			std::cout << "Enter Index :";
			if (!std::getline(std::cin, input))
				return ;
			i = std::atoi(input.data());
			if (i - 1 > IndexContact || i - 1 < 0 || input.size() > 1) //my arr start from 0 and the index printed start from 1;
				std::cout<< "❌**** Wrong Index *****❌" << std::endl;
			else 
				break;
		}
		std::cout<< "🔘 First Name : " << Contacs[i - 1].GetFirstName()<<std::endl;
		std::cout<< "🔘 Last Name : " << Contacs[i - 1].GetLastName()<<std::endl;
		std::cout<< "🔘 Nic Name : " << Contacs[i - 1].GetNicName()<<std::endl;
		std::cout<< "🔘 Phone Number : " << Contacs[i - 1].GetPhoneNumber() <<std::endl;
		std::cout<< "🔘 Darke Secret : " << Contacs[i - 1].GetDarkestSecret() <<std::endl;
	}
}
