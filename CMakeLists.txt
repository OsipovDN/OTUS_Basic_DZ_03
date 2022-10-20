cmake_minimum_required (VERSION 3.5)

project (OTUS_DZ_03)

add_executable (OTUS_Basic_DZ_03 OTUS_Basic_DZ_03.cpp "foo.h" "foo.cpp")


set_target_properties(OTUS_Basic_DZ_03 PROPERTIES
	CXX_STANDART 17
	CXX_STANDART_REQUIRED ON
)