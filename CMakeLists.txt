cmake_minimum_required(VERSION 3.23)
project(Jumper)


add_executable(Jumper main.cpp Source/Entity.cpp ../Jumper3/Header/Entity.h Source/Player.cpp ../Jumper3/Header/Player.h Source/Ball.cpp ../Jumper3/Header/Ball.h Source/Platform.cpp ../Jumper3/Header/Platform.h Source/PowerUp.cpp ../Jumper3/Header/PowerUp.h Source/Heart.cpp ../Jumper3/Header/Heart.h Source/HealthBar.cpp ../Jumper3/Header/HealthBar.h Source/Map.cpp ../Jumper3/Header/Map.h Source/Game.cpp ../Jumper3/Header/Game.h Source/CollisionDetector.cpp Header/CollisionDetector.h)


if (APPLE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
    include_directories(${SFML_INCLUDE_DIRS})
    set_target_properties(Jumper PROPERTIES
            MACOSX_BUNDLE TRUE
            MACOSX_BUNDLE_BUNDLE_NAME "<nome_del_tuo_eseguibile>"
            MACOSX_BUNDLE_BUNDLE_VERSION "1.0"
            )
endif()

# Configurazioni per Windows
if (WIN32)
    set (SFML_STATIC_LIBRARIES TRUE)
    set (SFML_DIR C:/SFML/lib/cmake/SFML)
    find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
endif()

target_link_libraries(Jumper sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
