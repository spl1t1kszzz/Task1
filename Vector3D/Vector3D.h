#ifndef VECTOR3D_H
#define VECTOR3D_H
#include "../Point3D/Point3D.h"

/**
 * @class Vector3D
 * @brief Class representing a 3D vector in space, with operations for vector manipulation.
 */
class Vector3D {
private:
    long double x;
    long double y;
    long double z;

public:
    /**
     * @brief Default constructor.
     * Constructs a zero vector.
     */
    Vector3D() = default;

    /**
     * @brief Default destructor.
     */
    ~Vector3D() = default;

    /**
     * @brief Constructs a vector from its X, Y, and Z components.
     * @param _x X component of the vector.
     * @param _y Y component of the vector.
     * @param _z Z component of the vector.
     */
    Vector3D(long double _x, long double _y, long double _z);

    /**
     * @brief Constructs a vector from two 3D points, representing the vector from point `a` to point `b`.
     * @param a The starting point of the vector.
     * @param b The ending point of the vector.
     */
    Vector3D(Point3D a, Point3D b);

    /**
     * @brief Gets the X component of the vector.
     * @return The X component.
     */
    [[nodiscard]] long double get_x() const;

    /**
     * @brief Gets the Y component of the vector.
     * @return The Y component.
     */
    [[nodiscard]] long double get_y() const;

    /**
     * @brief Gets the Z component of the vector.
     * @return The Z component.
     */
    [[nodiscard]] long double get_z() const;

    /**
     * @brief Calculates the Euclidean norm of the vector.
     * @return The norm of the vector.
     */
    [[nodiscard]] long double norm() const;

    /**
     * @brief Normalizes the vector, returning a unit vector in the same direction.
     * @return A normalized vector with a norm of 1.
     */
    [[nodiscard]] Vector3D normalize() const;
};

#endif // VECTOR3D_H
