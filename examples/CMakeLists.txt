set (excluded_examples
    elaboratePoint2KalmanFilter.cpp
)

# Add examples to exclude if GTSAM_USE_BOOST is not set
if (NOT GTSAM_USE_BOOST) 
  # add to excluded examples
  list (APPEND excluded_examples
      # Boost examples
      SolverComparer.cpp
      )
endif()

message(STATUS "Excluded examples!!: ${excluded_examples}")

gtsamAddExamplesGlob("*.cpp" "${excluded_examples}" "gtsam;gtsam_unstable;${Boost_PROGRAM_OPTIONS_LIBRARY}")
