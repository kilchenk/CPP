/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:41:35 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/17 17:03:26 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    // std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), 145, 137)
{
    // std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    // std::cout << "ShrubberyCreationForm copy assignment operator" << std::endl;
    _target = copy._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137)
{
    _target = target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const
{
    if (b.getGrade() <= getGradeExec() && getSigned())
    {
        std::string	filename;
        filename = _target + "_shrubbery";
	    std::ofstream output(filename.c_str(), std::ios::out);
        if (output.is_open())
        {
            output << "               _{\\ _{\\{\\/}/}/}__ \n"
                    "             {/{/\\}{/{/\\}(\\}{/\\} _ \n"
                    "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _ \n"
                    "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\} \n"
                    "        {/{/(_)/}{\\{/\\)}{\\(_){/}/}/}/} \n"
                    "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/} \n"
                    "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\} \n"
                    "      _{\\{/{\\{/(\\)/}{/{/{/\\}\\})\\}{/\\} \n"
                    "     {/{/{\\{\\(/}{/{\\{\\/})/}{\\(_)/}/}\\} \n"
                    "      {\\{\\/}(_){\\{\\/{\\/}/}(_){\\/}{\\/}/})/} \n"
                    "       {/{\\{\\/}{/{\\{\\/{\\/}/}{\\{\\/}/}\\}(_) \n"
                    "      {/{\\{\\/}{/){\\{\\/{\\/}/}{\\{\\(/}/}\\}/} \n"
                    "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\} \n"
                    "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\} \n"
                    "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) \n"
                    "            {/{/{\\{\\/}{/{\\{\\{\\(_)/} \n"
                    "             {/{\\{\\{\\/}/}{\\{\\\\}/} \n"
                    "              {){/ {\\/}{\\/} \\}\\} \n"
                    "              (_)  \\.-'.-/ \n"
                    "          __...--- |'-.-'| --...__ \n"
                    "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ \n"
                    " -\"    ' .  . '    |.'-._| '  . .  '   jro \n"
                    " .  '-  '    .--'  | '-.'|    .  '  . ' \n"
                    "          ' ..     |'-_.-| \n"
                    "  .  '  .       _.-|-._ -|-._  .  '  . \n"
                    "              .'   |'- .-|   '. \n"
                    "  ..-'   ' .  '.   `-._.-�   .'  '  - . \n"
                    "   .-' '        '-._______.-'     '  . \n"
                    "        .      ~, \n"
                    "    .       .   |\\   .    ' '-." << std::endl;
            output.close();
            std::cout << b.getName() << " executes " << getName() << " on " << _target << std::endl;
        }
    }
    else
    {
        if (!getSigned())
            std::cout << "This form '" << getName() << "' is not signed!" << std::endl;
        else
            throw AForm::GradeTooLowException();
    }
}  
