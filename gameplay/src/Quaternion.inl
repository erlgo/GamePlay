#include "Quaternion.h"
#include "Base.h"

namespace gameplay
{

inline Quaternion Quaternion::operator*(const Quaternion& q) const
{
    Quaternion result(*this);
    result.multiply(q);
    return result;
}

inline Quaternion& Quaternion::operator*=(const Quaternion& q)
{
    multiply(q);
    return *this;
}

inline Quaternion::operator btQuaternion() const
{
    return btQuaternion(x, y, z, w);
}

}
