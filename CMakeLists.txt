cmake_minimum_required(VERSION 3.28)

project(Sanitizers)

set(SOURCES 
    header.h
    funk1.cpp 
    funk2.cpp 
    funk3.cpp 
    funk4.cpp 
    funk5.cpp 
    solution.cpp 
    
)

add_executable(ASan ${SOURCES})
target_compile_options(ASan PRIVATE -fsanitize=address)
target_link_libraries(ASan PRIVATE -fsanitize=address)

add_executable(TSan solution.cpp funk1.cpp funk2.cpp funk3.cpp funk4.cpp funk5.cpp header.h)
target_compile_options(TSan PRIVATE -fsanitize=thread)
target_link_libraries(TSan PRIVATE -fsanitize=thread)

