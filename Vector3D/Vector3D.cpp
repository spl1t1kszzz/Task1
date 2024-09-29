#include "Vector3D.h"

Vector3D::Vector3D(long double _x, long double _y, long double _z): x(_x), y(_y), z(_z) {
}


Vector3D::Vector3D(Point3D a, Point3D b) {
    this->x = b.get_x() - a.get_x();
    this->y = b.get_y() - a.get_y();
    this->z = b.get_z() - a.get_z();
}

long double Vector3D::get_x() const {
    return x;
}

long double Vector3D::get_y() const {
    return y;
}

long double Vector3D::get_z() const {
    return z;
}

long double Vector3D::norm() const {
    return sqrt(x * x + y * y + z * z);
}

Vector3D Vector3D::normalize() const {
    const auto norm = this->norm();
    return Vector3D{this->get_x() / norm, this->get_y() / norm, this->get_z() / norm};
}
