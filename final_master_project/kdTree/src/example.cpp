#include <iostream>
#include "knncpp.h"

typedef Eigen::MatrixXd Matrix;
typedef knncpp::Matrixi Matrixi;

/*
int main()
{
    Matrix dataPoints(3, 9);
    dataPoints << 1, 2, 3, 1, 2, 3, 1, 2, 3,
                  2, 1, 0, 3, 2, 1, 0, 3, 4,
                  3, 1, 3, 1, 3, 4, 4, 2, 1;

    knncpp::KDTreeMinkowskiX<double, knncpp::EuclideanDistance<double>> kdtree(dataPoints);

    kdtree.setBucketSize(16);
    kdtree.setSorted(true);
    kdtree.setTakeRoot(false);
    kdtree.setMaxDistance(0);
    kdtree.setThreads(1);
    kdtree.build();

    Matrix queryPoints(3, 1);
    queryPoints << 0, 1, 0;

    Matrixi indices;
    Matrix distances;

    kdtree.query(queryPoints, 1, indices, distances);

    // Do something with the results.
    std::cout
        << "Data points:" << std::endl
        << dataPoints << std::endl
        << "Query points:" << std::endl
        << queryPoints << std::endl
        << "Neighbor indices:" << std::endl
        << indices << std::endl
        << "Neighbor distances:" << std::endl
        << distances << std::endl;

    return 0;
}*/
