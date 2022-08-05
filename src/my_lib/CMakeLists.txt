set(LIBRARY_SOURCES
    "my_lib.cpp")

set(LIBRARY_INCLUDES PUBLIC
    "./")


add_library(${LIBRARY_NAME} STATIC
    ${LIBRARY_SOURCES})
target_include_directories(${LIBRARY_NAME} PUBLIC
    ${LIBRARY_INCLUDES}
    "${CMAKE_BINARY_DIR}/configured_files/include")

target_link_libraries(${LIBRARY_NAME} PRIVATE
    nlohmann_json)
