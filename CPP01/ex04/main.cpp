/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:32:26 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/21 13:15:30 by kilchenk         ###   ########.fr       */
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

int checkInput(int argc, char **argv, std::ifstream &file)
{
    file.open(argv[1]);
    
    if (argc != 4)
    {
        out("wrong input");
        return 0;
    }
    if (!file)
    {
        out("invaild file");
        return 0;
    }
    else
        return 1;
}

int main(int argc, char **argv)
{
    int index =     0;
    std::ifstream   file;
    std::ofstream   newFile;
    std::string     tmp;
    std::string     fileConect;

    if(checkInput(argc, argv, file) == 0)
        return 0;

    newFile.open((std::string(argv[1]) + ".replace").c_str());
    while (getline(file, tmp))
        fileConect.append(tmp + "\n");
    if(!fileConect.empty())
        fileConect.erase(fileConect.end() - 1);
    while (fileConect.find(argv[2]) != std::string::npos)
    {
        index = fileConect.find(argv[2]);
        fileConect.erase(index, std::string(argv[2]).length());
        fileConect.insert(index, argv[3]);
        index += std::string(argv[3]).length();
    }
    
    newFile << fileConect;
    
    return 0;
}