cmake_minimum_required(VERSION 2.8)
project (jsoncpp)
# set(CMAKE_BUILD_TYPE Release)
message(STATUS "Base dir = ${CMAKE_SOURCE_DIR}")
include_directories( ${CMAKE_SOURCE_DIR}/include )
add_library(${PROJECT_NAME}
${CMAKE_SOURCE_DIR}/src/jsoncpp.cpp
)
target_link_libraries(${PROJECT_NAME})
install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/json
        DESTINATION include 
        FILES_MATCHING 
        PATTERN "*.h" 
)