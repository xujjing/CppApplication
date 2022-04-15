cmake_minimum_required(VERSION 3.0.0)
project(application VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

link_directories(
    ${PROJECT_SOURCE_DIR}/lib
)

link_libraries(libcrypto.a)
link_libraries(libssl.a)

aux_source_directory(./src DIR_SRCS)
add_executable(application ${DIR_SRCS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
