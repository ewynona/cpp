#include "ShrubberyCreationForm.hpp"

const	std::string ShrubberyCreationForm::_fields[2] = {
		"     .{{}}}}}}.\n" \
		"    {{{{{{(`)}}}.\n" \
		"   {{{(`)}}}}}}}}}\n" \
		"  }}}}}}}}}{{(`){{{\n" \
		"  }}}}{{{{(`)}}{{{{\n" \
		" {{{(`)}}}}}}}{}}}}}\n" \
		"{{{{{{{{(`)}}}}}}}}}}\n" \
		"{{{{{{{}{{{{(`)}}}}}}\n" \
		" {{{{{(`)   {{{{(`)}'\n" \
		"  `\"\"'\" |   | \"'\"'`\n" \
		"  (`)  /     \\\n" \
		" ~~~~~~~~~~~~~~~~~~~",
		"              * *    \n"\
		"           *    *  *\n"\
		"      *  *    *     *  *\n"\
		"     *     *    *  *    *\n"\
		" * *   *    *    *    *   *\n"\
		" *     *  *    * * .#  *   *\n"\
		" *   *     * #.  .# *   *\n"\
		"  *     \"#.  #: #\" * *    *\n"\
		" *   * * \"#. ##\"       *\n"\
		"   *       \"###\n"\
		"             \"##\n"\
		"              ##.\n"\
		"              .##:\n"\
		"              :###\n"\
		"              ;###\n"\
		"            ,####.\n" \
		"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\"
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
		Form("ShrubberyCreation", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) {
	this->_target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	this->_target = other._target;
	return (*this);
}

const char * ShrubberyCreationForm::FileOpenException::what() const throw() {
	return ("Exception: Can't open file");
}

const char * ShrubberyCreationForm::WriteException::what() const throw() {
	return ("Exception: Can't write in the file");
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);

	srand(time(0));
	std::ofstream outf(this->_target + "_shrubbery");
	int	count = rand() % 5;

	if (!outf.is_open()) {
		throw (ShrubberyCreationForm::FileOpenException());
	}
	for (int i = 0; i <= count; i++) {
		outf << this->_fields[rand() % 2];
		outf << std::endl;
		if (outf.bad()) {
			outf.close();
			throw (ShrubberyCreationForm::WriteException());
		}
	}
	outf << std::endl;
	outf.close();
}