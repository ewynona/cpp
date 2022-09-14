#include "Brain.hpp"

const std::string	Brain::identify() const{

	const long addr = (long)this;
	std::stringstream strStream;

	strStream << "0x" << std::uppercase << std::hex << addr;

	return (strStream.str());
}