#ifndef FVR_DAT_H
#define FVR_DAT_H

#include "libfvr_globals.h"

#include <string>
#include <vector>
#include <cstdint>

class FvrDatPrivate;
class LIBFVR_EXPORT FvrDat final
{
public:
    FvrDat();
    ~FvrDat();

    FvrDat(const FvrDat &other) = delete;
    FvrDat &operator=(const FvrDat &other) = delete;

    bool open(const std::string &datFileName);
    void close();
    bool isOpen() const;

    int fileCount() const;

    std::string fileName(const int &index) const;
    uint32_t fileSize(const int &index) const;
    std::vector<uint8_t> fileData(const int &index) const;

private:
    FvrDatPrivate *d_ptr;
};

#endif // FVR_DAT_H
