cmake_minimum_required(VERSION 3.15)
project(clibalgserver_mac)

set(CMAKE_CXX_STANDARD 14)

add_executable(clibalgserver_mac main.cpp cparser/cast.cpp cparser/cexception.cpp cparser/cgen.cpp
        cparser/cgui.cpp cparser/clexer.cpp cparser/cmem.cpp cparser/cparser.cpp
        cparser/crev.cpp cparser/cunit.cpp cparser/cvfs.cpp cparser/cvm.cpp cparser/types.cpp)

