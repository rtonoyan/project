cmake_minimum_required(VERSION 3.1)

project(finalproject) 

set(SOURCE_EXE main.c) 

set(SOURCE_LIB threadpool.c) 

add_library(threadpool STATIC ${SOURCE_LIB})

add_executable(tread ${SOURCE_EXE}) 

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

target_link_libraries(main threadpool Threads::Threads) 