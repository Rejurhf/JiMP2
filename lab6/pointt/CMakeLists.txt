
project(pointt)

set(HEDEAR_FILES Point.h)
set(SOURCE_FILES Pointt.cpp)

add_library(libpointt STATIC ${SOURCE_FILES})
target_include_directories(libpointt PUBLIC .)

add_executable(pointt ${SOURCE_FILES} main.cpp)

target_link_libraries(pointt libpointt)