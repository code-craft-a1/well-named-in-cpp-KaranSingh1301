cmake_minimum_required(VERSION 3.5)
project(TelCoColorCoder)

set(CMAKE_CXX_STANDARD 11)

add_executable(colorcoder
    main.cpp
    ColorPair.cpp
    ColorUtils.cpp
    ReferenceManual.cpp
)
