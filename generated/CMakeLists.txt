cmake_minimum_required(VERSION 3.5)
project(panel)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

# set path
set(PATH_LIB /home/thuhuong/Documents/final-gui/)
set(PATH_CUSTOM /custom/)


set(CMAKE_NO_SYSTEM_FROM_IMPORTED ON)
# Set compiler
set(CMAKE_CXX_COMPILER /usr/bin/arm-linux-gnueabihf-g++)
set(CMAKE_C_COMPILER /usr/bin/arm-linux-gnueabihf-gcc)

# set(CMAKE_C_FLAGS "-march=armv7-a -mfpu=neon -mfloat-abi=hard --sysroot=${TARGET}")
# set(CMAKE_CXX_FLAGS "-march=armv7-a -mfpu=neon -mfloat-abi=hard --sysroot=${TARGET}")

# Suppress warnings for GCC
if (CMAKE_COMPILER_IS_GNUCC AND CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 7.1)
    add_compile_options(-Wno-psabi)
endif()

# Adjust the default behaviour of the find commands:
# Search headers and libraries in the target environment
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
# Search programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)


# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${PATH_CUSTOM}
    ${PATH_LIB}
    ${PATH_LIB}/lvgl/
    ${PATH_LIB}/lv_drivers/
)

add_definitions(-DUSE_LOG_FILE)

# Set sources
file(GLOB_RECURSE IMAGE_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/images/*.c)
file(GLOB_RECURSE FONT_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/guider_fonts/*.c)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets_init.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gui_guider.c
    ${CMAKE_CURRENT_SOURCE_DIR}/events_init.c
)

# Library sources
file(GLOB_RECURSE LIB_SOURCES ${PATH_LIB}/lvgl/*.c)
file(GLOB_RECURSE LIB_SOURCES_DRIVER ${PATH_LIB}/lv_drivers/*.c)

# Build libraries
add_library(lvgl STATIC ${LIB_SOURCES})
add_library(lv_drivers STATIC ${LIB_SOURCES_DRIVER})

add_executable(gui_demo ${PROJECT_SOURCE_DIR}/main.c)
target_link_libraries(gui_demo lvgl lv_drivers)
