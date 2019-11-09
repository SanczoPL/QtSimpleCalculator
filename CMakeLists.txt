cmake_minimum_required(VERSION 3.9 FATAL_ERROR)
project(QtSimpleCalculator
  VERSION 0.0.1
  DESCRIPTION "QtSimpleCalculator"
  LANGUAGES C CXX)

add_subdirectory(App)
add_subdirectory(AppQtTests/)
