#include "DistanceCalc.h"

#include <iostream>

long double DistanceCalc::point_to_polyline(
    const Point3D &point, const Polyline3D &polyline) {
    const auto &segs = polyline.get_segments();
    std::vector<long double> dists;
    dists.reserve(segs.size());
    for (const auto &seg: segs) {
        dists.emplace_back(point_to_segment3d(point, seg));
    }
    return *std::ranges::min_element(dists);
}


long double DistanceCalc::point_to_segment3d(const Point3D &point, const Segment3D &segment_3d) {
    const Vector3D ppr{point, get_projection_point(point, segment_3d)};
    return ppr.norm();
}


long double DistanceCalc::dot(const Vector3D &left, const Vector3D &right) {
    return left.get_x() * right.get_x() + left.get_y() * right.get_y() + left.get_z() * right.get_z();
}

Point3D DistanceCalc::get_projection_point(const Point3D &point, const Segment3D &segment) {
    const auto a = segment.get_a();
    const auto b = segment.get_b();
    const Vector3D ab{a, b};
    const Vector3D v = ab.normalize();
    const Vector3D ap{a, point};
    const auto t = dot(v, ap);
    if (t > ab.norm()) {
        return b;
    }
    if (t < 0.0) {
        return a;
    }
    return {a.get_x() + t * v.get_x(), a.get_y() + t * v.get_y(), a.get_z() + t * v.get_z()};
}
