#include "Segment3D.h"

Segment3D::Segment3D(Point3D _a, Point3D _b): a(_a), b(_b) {
}

Segment3D &Segment3D::operator=(const Segment3D &other) {
    if (this == &other)
        return *this;
    a = other.a;
    b = other.b;
    return *this;
}

Point3D Segment3D::get_a() const {
    return a;
}

Point3D Segment3D::get_b() const {
    return b;
}


std::ostream &operator<<(std::ostream &os, const Segment3D &segment_3d) {
    os << segment_3d.a << ';' << segment_3d.b;
    return os;
}
