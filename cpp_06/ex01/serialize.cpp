#include <iostream>

struct Data {
	char a;
	char b;
	char c;
};

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main(void) {

	Data *ptr1 = new Data;
	Data *ptr2;
	uintptr_t	raw;

	ptr1->a = 'A';
	ptr1->b = 'B';
	ptr1->c = 'C';
	raw = serialize(ptr1);
	std::cout << "0x" << std::hex << raw << std::endl;
	std::cout << ptr1 << std::endl;
	std::cout << std::endl;

	ptr2 = deserialize(raw);

	std::cout << "ptr1:" << " A: " << ptr1->a << " B: " << ptr1->b << " C: " << ptr1->c << std::endl;
	std::cout << "ptr2:" << " A: " << ptr2->a << " B: " << ptr2->b << " C: " << ptr2->c << std::endl;

	return (0);
}