#include "Point3D.h"


Point3D::Point3D(long double _x, long double _y, long double _z): x(_x), y(_y), z(_z) {
}

Point3D &Point3D::operator=(const Point3D &other) {
    if (this == &other)
        return *this;
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
}


long double Point3D::get_x() const {
    return x;
}

long double Point3D::get_y() const {
    return y;
}

long double Point3D::get_z() const {
    return z;
}


std::ostream &operator<<(std::ostream &os, const Point3D &p) {
    os << p.x << ' ' << p.y << ' ' << p.z;
    return os;
}

bool operator==(const Point3D &left, const Point3D &right) {
    constexpr long double accuracy = 1e-5;
    return std::abs(left.x - right.x) < accuracy and
           std::abs(left.y - right.y) < accuracy and std::abs(left.z - right.z) < accuracy;
}
