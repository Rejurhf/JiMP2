
project(zipper)

set(HEDEAR_FILES Zipper.h Iterator.h)
set(SOURCE_FILES Zipper.cpp Iterator.cpp)

add_library(libzipper STATIC ${SOURCE_FILES})
target_include_directories(libzipper PUBLIC .)

add_executable(zipper ${SOURCE_FILES} main.cpp)

target_link_libraries(zipper libzipper)