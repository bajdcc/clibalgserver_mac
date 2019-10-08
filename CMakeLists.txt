cmake_minimum_required(VERSION 3.15)
project(clibalgserver_mac)

set(CMAKE_CXX_STANDARD 14)
set(BITNESS 64)

link_directories(/usr/local/lib)
link_libraries(event)

add_executable(clibalgserver_main main.cpp cparser/cast.cpp cparser/cexception.cpp cparser/cgen.cpp
        cparser/cgui.cpp cparser/clexer.cpp cparser/cmem.cpp cparser/cparser.cpp
        cparser/crev.cpp cparser/cunit.cpp cparser/cvfs.cpp cparser/cvm.cpp cparser/types.cpp)

add_executable(clibalgserver_server server.cpp parser.cpp mime.cpp cparser/cast.cpp cparser/cexception.cpp cparser/cgen.cpp
        cparser/cgui.cpp cparser/clexer.cpp cparser/cmem.cpp cparser/cparser.cpp
        cparser/crev.cpp cparser/cunit.cpp cparser/cvfs.cpp cparser/cvm.cpp cparser/types.cpp server.cpp)
