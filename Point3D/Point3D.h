#ifndef POINT3D_H
#define POINT3D_H
#include <ostream>


class Point3D {
private:
    long double x;
    long double y;
    long double z;

public:
    Point3D &operator=(const Point3D &other);

    Point3D(long double _x, long double _y, long double _z);

    Point3D() = default;

    ~Point3D() = default;

    friend std::ostream &operator<<(std::ostream &os, const Point3D &p);

    friend bool operator==(const Point3D &left, const Point3D &right);

    [[nodiscard]] long double get_x() const;

    [[nodiscard]] long double get_y() const;

    [[nodiscard]] long double get_z() const;
};


#endif //POINT3D_H
