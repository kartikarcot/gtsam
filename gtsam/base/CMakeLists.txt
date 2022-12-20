# Install headers
file(GLOB base_headers "*.h")
install(FILES ${base_headers} DESTINATION include/gtsam/base)

file(GLOB base_headers_tree "treeTraversal/*.h")
install(FILES ${base_headers_tree} DESTINATION include/gtsam/base/treeTraversal)

add_executable(optionaltest optional_test.cpp)
target_link_libraries(optionaltest PUBLIC Eigen3::Eigen)
# Build tests
add_subdirectory(tests)
