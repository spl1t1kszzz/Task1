#include "Polyline3D.h"

Polyline3D::Polyline3D(std::vector<Point3D> &points) {
    this->segments.reserve(points.size() - 1);
    for (int i = 0; i < points.size() - 1; ++i) {
        this->segments.emplace_back(points[i], points[i + 1]);
    }
}

const std::vector<Segment3D> &Polyline3D::get_segments() const {
    return segments;
}
