cmake_minimum_required(VERSION 2.8.2)

project(whycpp-download NONE)

include(ExternalProject)
ExternalProject_Add(whycpp
        URL               https://github.com/senior-sigan/WHY_CPP/archive/v1.9.tar.gz
        URL_MD5           "b81c7c5a4b17603841f9cdb96f0cd8bf"
        SOURCE_DIR        "${CMAKE_CURRENT_BINARY_DIR}/whycpp-src"
        BINARY_DIR        "${CMAKE_CURRENT_BINARY_DIR}/whycpp-build"
        CONFIGURE_COMMAND ""
        BUILD_COMMAND     ""
        INSTALL_COMMAND   ""
        TEST_COMMAND      ""
        )