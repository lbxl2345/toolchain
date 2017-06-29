#ifndef ENABLE_BOUND_GUARD
#define ENABLE_BOUND_GUARD 1

struct remapInfo {
	unsigned long l_addr;
	//code and .got.plt
	unsigned long oldCodeBase;
	unsigned long newCodeBase;
	unsigned long oldGpBase;
	unsigned long newGpBase;
	size_t codeSize;
	size_t gpSize;
	//rodata section info
	unsigned long oldRoBase;
	unsigned long newRoBase;
	size_t relRoSize;
};