cmake_minimum_required(VERSION 3.9 FATAL_ERROR)
project(QtSimpleCalculatorTest
  VERSION 0.0.1
  DESCRIPTION "QtSimpleCalculator Test"
  LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${FLAGS_COMMON}")
set(TARGET_NAME "QtSimpleCalculatorTest")

enable_testing()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

include_directories("${PROJECT_SOURCE_DIR}/../App/")

find_package(Qt5Widgets REQUIRED)
find_package(Threads REQUIRED)
find_package(Qt5Test REQUIRED)

set(SRC
tst_testcalculator.cpp
../App/widget.cpp
../App/widget.ui
../App/calculatorlogic.cpp
)

set(HEADERS
    ../App/widget.h
    ../App/calculatorlogic.h
)

add_executable(${TARGET_NAME}
    ${SRC}
    ${HEADERS}
)
add_test(${TARGET_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Test Threads::Threads)
