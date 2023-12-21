#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

typedef unsigned long uintptr_t;

#include <iostream>

struct Data{
	int a;
};


class Serializer{
	private:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		~Serializer();
};

#endif