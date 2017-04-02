
project(family)

set(HEDEAR_FILES Parent.h Child.h)
set(SOURCE_FILES Parent.cpp Child.cpp)

add_library(libfamily STATIC ${SOURCE_FILES})
target_include_directories(libfamily PUBLIC .)

add_executable(family ${SOURCE_FILES} main.cpp)

target_link_libraries(family libfamily)