#pragma once
#include <cstdint>

#include "VPU.h"
#include "Cartridge.h"

class CCU
{
public:
	CCU();
	~CCU();
	void setAtAddress(uint32_t address, uint8_t value);
	uint8_t getFromAddress(uint32_t address);

protected:
	uint8_t RAM[0x40000];
	VPU VPU;
	// Cartridge cartridge;
};

