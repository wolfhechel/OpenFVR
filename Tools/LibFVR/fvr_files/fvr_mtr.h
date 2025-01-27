#ifndef FVR_MTR_H
#define FVR_MTR_H

#include "libfvr_globals.h"

#include <string>
#include <vector>

#include "fvr/image.h"

class FvrMtrPrivate;
class LIBFVR_EXPORT FvrMtr final
{
public:
    FvrMtr();
    ~FvrMtr();

    FvrMtr(const FvrMtr &other) = delete;
    FvrMtr &operator=(const FvrMtr &other) = delete;

    bool open(const std::string &mtrFileName);
    void close();
    bool isOpen() const;

    uint32_t width() const;
    uint32_t height() const;
    Image const &image() const;

private:
    FvrMtrPrivate *d_ptr;
};

#endif // FVR_MTR_H
