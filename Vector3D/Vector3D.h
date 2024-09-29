#ifndef VECTOR3D_H
#define VECTOR3D_H
#include "../Point3D/Point3D.h"


class Vector3D {
private:
    long double x;
    long double y;
    long double z;

public:
    Vector3D() = default;

    ~Vector3D() = default;

    Vector3D(long double _x, long double _y, long double _z);

    Vector3D(Point3D a, Point3D b);

    [[nodiscard]] long double get_x() const;

    [[nodiscard]] long double get_y() const;

    [[nodiscard]] long double get_z() const;

    [[nodiscard]] long double norm() const;

    [[nodiscard]] Vector3D normalize() const;
};


#endif //VECTOR3D_H
