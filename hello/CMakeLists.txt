cmake_minimum_required(VERSION 3.14)
project(Hello)

# create local variable
set(EXE_TARGET main)
set(LIB_TARGET Hello)
set(EXE_SOURCE main.cpp)
set(LIB_SOURCE Hello.cpp)

# create a share library
add_library(${LIB_TARGET} SHARED ${LIB_SOURCE})
set_target_properties(${LIB_TARGET} PROPERTIES
	VERSION 0.0
	SOVERSION 1
	)

# find extra lib as variable
find_library(USR_LOCAL_LIBRARY
	NAMES lz4
	PATH /usr/local/lib
	)

# create a executable program
add_executable(${EXE_TARGET} ${EXE_SOURCE})
target_link_libraries(${EXE_TARGET} ${LIB_TARGET} ${USR_LOCAL_LIBRARY})

# install library and program
install(TARGETS ${EXE_TARGET} DESTINATION bin)
install(TARGETS ${LIB_TARGET} DESTINATION lib)

message("Done...")
