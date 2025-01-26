#pragma once
#include <ostream>
#include <string>

class Cartridge
{
public:
	void setAtAddress(uint32_t address, uint8_t value);
	void getFromAddress(uint32_t address);
	bool loadFromFile(std::string fileName); // TODO

protected:
	uint16_t data[0x30000];
};

