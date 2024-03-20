/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:32:26 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/20 17:47:40 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    out(std::string txt)
{
	std::cout << std::endl << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
	std::cout << (txt.size() > 16 ? "	" : "		");
	std::cout << ">>>" << txt << "<<<" << std::endl;
	std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl << std::endl;
}

bool checkInput(int argc, char **argv, std::ifstream &file)
{
    if (argc != 4)
        {
            out("Wrong input");
            return false;
        }
    file.open(argv[1]);
    if (!file)
        {
            out("wrong file");
            return false;
        }
    else
        return true;
}


int  main(int argc, char **argv)
{
    std::ifstream   file;
    std::ofstream   newFile;
    std::string     tmp;
    std::string     saveString;
    int             index = 0;

    if (checkInput(argc, argv, file) == false)
        return 0;
    
    newFile.open((std::string(argv[1]) + ".replace").c_str());
    
    while (std::getline(file, tmp))
        saveString.append(tmp + "\n"); //!
    if (!saveString.empty())
        saveString.erase(saveString.end() - 1);
    while (saveString.find(argv[2]) != std::string::npos)
    {
        index = saveString.find(argv[2]);
        saveString.erase(index, std::string(argv[2]).length());
        saveString.insert(index, std::string(argv[3]));
        index += std::string(argv[3]).length();
    } 
    
    newFile << saveString;
    file.close();
    newFile.close();
    return 0;
}
