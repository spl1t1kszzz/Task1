#ifndef POINT3D_H
#define POINT3D_H
#include <ostream>

/**
 * @class Point3D
 * @brief Class representing a three-dimensional point in space.
 */
class Point3D {
private:
    long double x;
    long double y;
    long double z;

public:
    /**
     * @brief Assignment operator.
     * @param other Another point whose values will be assigned to the current one.
     * @return Reference to the current object.
     */
    Point3D &operator=(const Point3D &other);

    /**
     * @brief Constructor initializing the point with the given coordinates.
     * @param _x X coordinate of the point.
     * @param _y Y coordinate of the point.
     * @param _z Z coordinate of the point.
     */
    Point3D(long double _x, long double _y, long double _z);

    Point3D() = default;

    ~Point3D() = default;

    /**
     * @brief Overloaded stream insertion operator to output point coordinates.
     * @param os Output stream object.
     * @param p Point3D object to be inserted into the stream.
     * @return Reference to the output stream.
     */
    friend std::ostream &operator<<(std::ostream &os, const Point3D &p);

    /**
     * @brief Equality operator to compare two points.
     * @param left First point to compare.
     * @param right Second point to compare.
     * @return True if both points have the same coordinates, false otherwise.
     */
    friend bool operator==(const Point3D &left, const Point3D &right);

    /**
     * @brief Gets the X coordinate of the point.
     * @return The X coordinate.
     */
    [[nodiscard]] long double get_x() const;

    /**
     * @brief Gets the Y coordinate of the point.
     * @return The Y coordinate.
     */
    [[nodiscard]] long double get_y() const;

    /**
     * @brief Gets the Z coordinate of the point.
     * @return The Z coordinate.
     */
    [[nodiscard]] long double get_z() const;
};

#endif // POINT3D_H
