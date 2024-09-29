#ifndef DISTANCECALC_H
#define DISTANCECALC_H
#include "../Point3D/Point3D.h"
#include "../Polyline3D/Polyline3D.h"
#include "../Vector3D/Vector3D.h"


class DistanceCalc {
public:
    [[nodiscard]] static long double point_to_polyline(const Point3D &point, const Polyline3D &polyline);

    [[nodiscard]] static long double point_to_segment3d(const Point3D &point, const Segment3D &segment_3d);

    [[nodiscard]] static long double dot(const Vector3D &left, const Vector3D &right);

    static Point3D get_projection_point(const Point3D &point, const Segment3D &segment);
};


#endif //DISTANCECALC_H
