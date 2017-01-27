#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <Definitions.h>

class Allocator {

public:
    virtual byte** allocate(size_t count, bool useBlockNumber, U64 blockNumber) = 0;
    virtual uintptr_t deallocate(void* address) = 0;
    virtual void defragment() = 0;
};

#endif /*ALLOCATOR_H*/