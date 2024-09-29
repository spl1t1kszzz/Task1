#include <iostream>
#include <fstream>
#include <sstream>
#include "Polyline3D/Polyline3D.h"
#include "DistanceCalc/DistanceCalc.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "args missed" << std::endl;
        return -1;
    }

    std::fstream input_file{argv[1]};
    if (!input_file.is_open()) {
        std::cerr << "can't open input file!" << std::endl;
        return -1;
    }
    std::vector<Point3D> points;
    for (std::string line; getline(input_file, line);) {
        std::stringstream ss{line};
        long double x, y, z;
        ss >> x >> y >> z;
        points.emplace_back(x, y, z);
    }
    Polyline3D poly{points};
    auto x = std::stold(argv[2]);
    auto y = std::stold(argv[3]);
    auto z = std::stold(argv[4]);
    Point3D point{x, y, z};
    const auto dist = DistanceCalc::point_to_polyline(point, poly);
    const auto &segs = poly.get_segments();
    for (int i = 0; i < segs.size(); ++i) {
        if (std::abs(DistanceCalc::point_to_segment3d(point, segs[i]) - dist) < 1e-5) {
            std::cout << "segment " << i + 1 << " point " << DistanceCalc::get_projection_point(point, segs[i]) <<
                    std::endl;
        }
    }
    return 0;
}
