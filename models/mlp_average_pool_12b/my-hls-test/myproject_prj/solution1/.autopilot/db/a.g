#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ferroelectric/Desktop/Unsupervised-rotation-detection-and-label-learning/models/mlp_average_pool_12b/my-hls-test/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}