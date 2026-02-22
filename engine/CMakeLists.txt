add_library(engine STATIC src/core/GameBase.cpp
        ../sandbox/src/main.cpp
        include/engine/MathUtils.h
        src/core/Renderer.cpp
        include/engine/Renderer.h
)

target_link_libraries(engine PRIVATE raylib)

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)