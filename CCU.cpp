#include "CCU.h"

CCU::CCU()
{
	memset(this->RAM, 0, 0x40000);
}

CCU::~CCU()
{
	this->VPU.~VPU();
}

void CCU::setAtAddress(uint32_t address, uint8_t value)
{
	if (address >= 0 && address < 0x4000) // onboard RAM
	{
		this->RAM[address] = value;
	}
	else if (address >= 0x4000 && address < 0x5000) // video ram
	{
		this->VPU.VRAM[address - 0x4000] = value;
	}
	else // cartridge data, for making programs
	{
		this->RAM[address] = value; // todo
	}
}

uint8_t CCU::getFromAddress(uint32_t address)
{
	return this->RAM[address];
}
