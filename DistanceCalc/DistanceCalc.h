#ifndef DISTANCECALC_H
#define DISTANCECALC_H
#include "../Point3D/Point3D.h"
#include "../Polyline3D/Polyline3D.h"
#include "../Vector3D/Vector3D.h"

/**
 * @class DistanceCalc
 * @brief A utility class for calculating distances between 3D geometric objects.
 */
class DistanceCalc {
public:
    /**
     * @brief Calculates the shortest distance from a point to a polyline.
     * The distance is measured as the shortest perpendicular or the endpoint distance from the point to the segments of the polyline.
     * @param point The 3D point from which the distance is calculated.
     * @param polyline The polyline (composed of multiple segments) to which the distance is measured.
     * @return The shortest distance from the point to the polyline.
     */
    [[nodiscard]] static long double point_to_polyline(const Point3D &point, const Polyline3D &polyline);

    /**
     * @brief Calculates the shortest distance from a point to a 3D segment.
     * This includes perpendicular distances or distance to the segment's endpoints if the perpendicular does not intersect the segment.
     * @param point The 3D point from which the distance is calculated.
     * @param segment_3d The segment to which the distance is measured.
     * @return The shortest distance from the point to the segment.
     */
    [[nodiscard]] static long double point_to_segment3d(const Point3D &point, const Segment3D &segment_3d);

    /**
     * @brief Calculates the dot product of two 3D vectors.
     * @param left The first vector.
     * @param right The second vector.
     * @return The dot product of the two vectors.
     */
    [[nodiscard]] static long double dot(const Vector3D &left, const Vector3D &right);

    /**
     * @brief Finds the projection of a point onto a 3D segment.
     * The projection is the point on the segment that is closest to the given point.
     * @param point The point to project.
     * @param segment The segment onto which the point is projected.
     * @return The projected point on the segment.
     */
    static Point3D get_projection_point(const Point3D &point, const Segment3D &segment);
};

#endif // DISTANCECALC_H
