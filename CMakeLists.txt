cmake_minimum_required (VERSION 3.5)

project (OTUS_DZ_03)

add_executable (OTUS_Basic_DZ_03 OTUS_Basic_DZ_03.cpp "File.h" "File.cpp" "Game.cpp" "Game.h")


set_target_properties(OTUS_Basic_DZ_03 PROPERTIES
	CXX_STANDART 17
	CXX_STANDART_REQUIRED ON
)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
target_compile_options(OTUS_Basic_DZ_03 PRIVATE
-g
-Wall
-Wextra
-Werror
-pedantic)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
target_compile_options(OTUS_Basic_DZ_03 PRIVATE
/EHsc
/W4
/WX)
endif()