/*
 * compute_graph_test.cpp
 *
 *  Created on: Aug 4, 2021
 *      Author: horance
 */
#include "fmk/graph/core/cgraph/compute_graph.h"
#include "cctest/cctest.h"

namespace hiai {

namespace {

FIXTURE(ComputeGraphSpec) {
    TEST("construct compute graph succ") {
        ComputeGraph graph;
    }
};

}

} // namespace hiai
