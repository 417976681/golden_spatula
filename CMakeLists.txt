cmake_minimum_required(VERSION 3.16)
project(golden_spatula LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# 修改为你的 Qt 安装路径（Qt 6 示例）
set(CMAKE_PREFIX_PATH "D:/Qt/qt6.7/Tools/CMake_64/bin")

find_package(Qt6 COMPONENTS Widgets REQUIRED)

file(GLOB HERO_ONE_SRC hero/one/*.cpp)
file(GLOB HERO_ONE_INCLUDE hero/one/*.h)
file(GLOB HERO_TWO_SRC hero/two/*.cpp)
file(GLOB HERO_TWO_INCLUDE hero/two/*.h)
file(GLOB HERO_THREE_SRC hero/three/*.cpp)
file(GLOB HERO_THREE_INCLUDE hero/three/*.h)
file(GLOB HERO_FOUR_SRC hero/four/*.cpp)
file(GLOB HERO_FOUR_INCLUDE hero/four/*.h)
file(GLOB HERO_FIVE_SRC hero/five/*.cpp)
file(GLOB HERO_FIVE_INCLUDE hero/five/*.h)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/hero
    ${CMAKE_CURRENT_SOURCE_DIR}/hero/one
    ${CMAKE_CURRENT_SOURCE_DIR}/hero/two
    ${CMAKE_CURRENT_SOURCE_DIR}/hero/three
    ${CMAKE_CURRENT_SOURCE_DIR}/hero/four
    ${CMAKE_CURRENT_SOURCE_DIR}/hero/five
)

add_executable(golden_spatula
    main.cpp
    golden_spatula.cpp
    golden_spatula.h
    basic_attribute.cpp
    basic_attribute.h
    hero/one/aatrox.h
    hero/one/aatrox.cpp
    # ${HERO_ONE_SRC}
    # ${HERO_ONE_INCLUDE}
    # ${HERO_TWO_SRC}
    # ${HERO_TWO_INCLUDE}
    # ${HERO_THREE_SRC}
    # ${HERO_THREE_INCLUDE}
    # ${HERO_FOUR_SRC}
    # ${HERO_FOUR_INCLUDE}
    # ${HERO_FIVE_SRC}
    # ${HERO_FIVE_INCLUDE}
    golden_spatula.ui
)

target_link_libraries(golden_spatula PRIVATE Qt6::Widgets)

# 包含所有头文件搜索路径
target_include_directories(golden_spatula PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}      # 根目录，包含 basic_attribute.h
    ${CMAKE_CURRENT_SOURCE_DIR}/hero # hero 子目录
)
