#ifndef POLYLINE3D_H
#define POLYLINE3D_H
#include <vector>

#include "../Segment3D/Segment3D.h"


class Polyline3D {
private:
    std::vector<Segment3D> segments;

public:
    Polyline3D() = default;

    ~Polyline3D() = default;

    explicit Polyline3D(std::vector<Point3D> &points);

    [[nodiscard]] const std::vector<Segment3D> &get_segments() const;
};


#endif //POLYLINE3D_H
