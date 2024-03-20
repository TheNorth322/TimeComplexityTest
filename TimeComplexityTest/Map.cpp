#include "Map.h"
#include <iostream>

Map::Map() {
	this->values = new int[26];
}

int Map::getIndex(char c) {
	if (c < 'a' || c > 'z')
		throw new std::invalid_argument("Invalid char");
	return c - 97;
}

void Map::insert(char c, int value) {
	int index = getIndex(c);
	this->values[index] = value;
}

int Map::get(char c) {
	int index = getIndex(c);
	return this->values[index];
}

void Map::display() {
	for (int i = 0; i < 26; i++) {
		std::cout << ((char)(i + 97)) << ": " << values[i] << std::endl;
	}
}
