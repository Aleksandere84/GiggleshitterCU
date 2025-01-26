#include "VPU.h"

VPU::VPU()
{
	memset(this->VRAM, 0, 0x10000);
}

VPU::~VPU()
{
	delete this;
}

void VPU::setAtAddress(uint32_t address, uint8_t value)
{
	if (address <= 0x0FFFF)
	{
		this->VRAM[address] = value;
	}
}

uint8_t VPU::getFromAddress(uint32_t address)
{
	return this->VRAM[address];
}
