
project(palindrome)

set(HEDEAR_FILES Palindrome.h)
set(SOURCE_FILES Palindrome.cpp)

add_library(libpalindrome STATIC ${SOURCE_FILES})
target_include_directories(libpalindrome PUBLIC .)

add_executable(palindrome ${SOURCE_FILES} main.cpp ../palindrome/Palindrome.cpp ../palindrome/Palindrome.h)

target_link_libraries(palindrome libpalindrome)