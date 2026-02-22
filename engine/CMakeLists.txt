add_library(engine STATIC src/Game.cpp
        ../sandbox/src/main.cpp)

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)