#pragma once
#include <cstdint>
#include <iostream>

class CCU;

class VPU
{
public:
	VPU();
	~VPU();

protected:
	void setAtAddress(uint32_t address, uint8_t value);
	uint8_t getFromAddress(uint32_t address);
	uint8_t VRAM[0x10000];

	friend class CCU;
};

