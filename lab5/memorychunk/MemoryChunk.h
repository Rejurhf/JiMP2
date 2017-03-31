//
// Created by Rejurhf on 01.04.2017.
//

#ifndef JIMP_EXERCISES_MEMORYCHUNK_H
#define JIMP_EXERCISES_MEMORYCHUNK_H

#include <cstdint>
#include <algorithm>

namespace memorychunk{
    class MemoryChunk{
    public:
        MemoryChunk(size_t sz);
        MemoryChunk(const MemoryChunk &memo);
        MemoryChunk(MemoryChunk &&memo);
        MemoryChunk &operator=(const MemoryChunk &memo);
        MemoryChunk &operator=(MemoryChunk &&memo);
        ~MemoryChunk();
        int8_t *MemoryAt(size_t offset) const;
        size_t ChunkSize() const;
    private:
        int8_t *arg_;
        size_t sz_;
    };
}

#endif //JIMP_EXERCISES_MEMORYCHUNK_H
