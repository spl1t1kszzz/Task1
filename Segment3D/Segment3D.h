#ifndef SEGMENT3D_H
#define SEGMENT3D_H
#include "../Point3D/Point3D.h"


class Segment3D {
private:
    Point3D a;
    Point3D b;

public:
    Segment3D() = default;

    ~Segment3D() = default;

    Segment3D(Point3D _a, Point3D _b);

    friend std::ostream &operator<<(std::ostream &os, const Segment3D &segment);

    Segment3D &operator=(const Segment3D &other);

    [[nodiscard]] Point3D get_a() const;

    [[nodiscard]] Point3D get_b() const;
};


#endif //SEGMENT3D_H
