#include <gtest/gtest.h>

#include "../Point3D/Point3D.h"
#include "../Polyline3D/Polyline3D.h"
#include "../DistanceCalc/DistanceCalc.h"


TEST(Task1, polyline1_distance) {
    Point3D a(0.75, 0.1, 1.5);
    Point3D b(1.25, 0.44, 0.0);
    Point3D c(0.0, 1.0, 0.0);
    Point3D d(0.0, 0.0, 0.0);
    std::vector points{a, b, c, d};
    Point3D point{0.6, 0.4, 0.0};
    Polyline3D poly{points};
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_polyline(point, poly), 0.302254203509657);
}

TEST(Task1, polyline1_projection_point) {
    Point3D a(0.75, 0.1, 1.5);
    Point3D b(1.25, 0.44, 0.0);
    Point3D c(0.0, 1.0, 0.0);
    Point3D d(0.0, 0.0, 0.0);
    std::vector points{a, b, c, d};
    Point3D point{0.6, 0.4, 0.0};
    Polyline3D poly{points};
    auto seg = Segment3D(b, c);
    ASSERT_DOUBLE_EQ(DistanceCalc::get_projection_point(point, seg).get_x(), 0.72357550237194168);
    ASSERT_DOUBLE_EQ(DistanceCalc::get_projection_point(point, seg).get_y(), 0.67583817493737);
    ASSERT_DOUBLE_EQ(DistanceCalc::get_projection_point(point, seg).get_z(), 0.0);
}


TEST(Task1, example_1_distance) {
    Point3D a(0, 0, 0);
    Point3D b(1, 0, 0);
    Point3D c(2, 1, 0);
    Point3D d(3, 1, 1);
    std::vector points{a, b, c, d};
    Polyline3D poly{points};
    Point3D point(2, 0.5, 0.5);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_polyline(point, poly), 0.6123724356957945);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[0]), 1.224744871391589);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[1]), 0.6123724356957945);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[2]), 0.6123724356957945);
}

TEST(Task1, example_2_distance) {
    Point3D a(0, 0, 0);
    Point3D b(2, 0, 0);
    Point3D c(2, 2, 0);
    Point3D d(0, 2, 0);
    Point3D e(0, 0, 0);
    std::vector points{a, b, c, d, e};
    Polyline3D poly{points};
    Point3D point(1, 1, 1);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_polyline(point, poly), 1.4142135623730951);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[0]), 1.4142135623730951);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[1]), 1.4142135623730951);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[2]), 1.4142135623730951);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[3]), 1.4142135623730951);
}

TEST(Task1, example_3_distance) {
    Point3D a(0, 0, 0);
    Point3D b(2, 0, 0);
    Point3D c(2, 2, 0);
    Point3D d(0, 2, 0);
    Point3D e(0, 0, 0);
    std::vector points{a, b, c, d, e};
    Polyline3D poly{points};
    Point3D point(3, 3, 3);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_polyline(point, poly), 3.3166247903554);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[0]), 4.358898943540674);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[1]), 3.3166247903554);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[2]), 3.3166247903554);
    ASSERT_DOUBLE_EQ(DistanceCalc::point_to_segment3d(point, poly.get_segments()[3]), 4.358898943540674);
}
