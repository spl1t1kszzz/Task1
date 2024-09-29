#ifndef POLYLINE3D_H
#define POLYLINE3D_H
#include <vector>

#include "../Segment3D/Segment3D.h"

/**
 * @class Polyline3D
 * @brief Class representing a polyline in 3D space, which is made up of multiple 3D line segments.
 */
class Polyline3D {
private:
    std::vector<Segment3D> segments;

public:
    /**
     * @brief Default constructor.
     * Constructs an empty polyline.
     */
    Polyline3D() = default;

    /**
     * @brief Default destructor.
     */
    ~Polyline3D() = default;

    /**
     * @brief Constructs a polyline from a list of points.
     * The polyline is formed by connecting each consecutive pair of points with a segment.
     * @param points A reference to a vector of 3D points used to create the segments of the polyline.
     */
    explicit Polyline3D(std::vector<Point3D> &points);

    /**
     * @brief Gets the segments that form the polyline.
     * @return A constant reference to the vector of segments.
     */
    [[nodiscard]] const std::vector<Segment3D> &get_segments() const;
};

#endif // POLYLINE3D_H
