#ifndef SEGMENT3D_H
#define SEGMENT3D_H
#include "../Point3D/Point3D.h"

/**
 * @class Segment3D
 * @brief Class representing a 3D line segment defined by two 3D points.
 */
class Segment3D {
private:
    Point3D a;
    Point3D b;

public:
    /**
     * @brief Default constructor.
     * Constructs an empty segment with default points.
     */
    Segment3D() = default;

    /**
     * @brief Default destructor.
     */
    ~Segment3D() = default;

    /**
     * @brief Constructs a segment from two given points.
     * @param _a Starting point of the segment.
     * @param _b Ending point of the segment.
     */
    Segment3D(Point3D _a, Point3D _b);

    /**
     * @brief Overloaded stream insertion operator to output the segment.
     * @param os Output stream object.
     * @param segment Segment3D object to be inserted into the stream.
     * @return Reference to the output stream.
     */
    friend std::ostream &operator<<(std::ostream &os, const Segment3D &segment);

    /**
     * @brief Assignment operator.
     * @param other Another segment to assign values from.
     * @return Reference to the current object.
     */
    Segment3D &operator=(const Segment3D &other);

    /**
     * @brief Gets the starting point of the segment.
     * @return The starting point (Point3D object).
     */
    [[nodiscard]] Point3D get_a() const;

    /**
     * @brief Gets the ending point of the segment.
     * @return The ending point (Point3D object).
     */
    [[nodiscard]] Point3D get_b() const;
};

#endif // SEGMENT3D_H
