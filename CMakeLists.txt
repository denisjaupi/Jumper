cmake_minimum_required(VERSION 3.23)
project(Jumper)


# Impostazione delle variabili delle librerie SFML
set(SFML_DIR "C:/SFML/lib/cmake/SFML")
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR_DEBUG "${SFML_DIR}")
set(SFML_DIR_RELEASE "${SFML_DIR}")

# Trova le librerie SFML
find_package(SFML COMPONENTS graphics audio REQUIRED)

# Aggiunta degli eseguibili e dei file sorgente
add_executable(Jumper main.cpp Source/Entity.cpp ../Jumper3/Header/Entity.h Source/Player.cpp ../Jumper3/Header/Player.h Source/Ball.cpp ../Jumper3/Header/Ball.h Source/Platform.cpp ../Jumper3/Header/Platform.h Source/PowerUp.cpp ../Jumper3/Header/PowerUp.h Source/Heart.cpp ../Jumper3/Header/Heart.h Source/HealthBar.cpp ../Jumper3/Header/HealthBar.h Source/Map.cpp ../Jumper3/Header/Map.h Source/Game.cpp ../Jumper3/Header/Game.h Source/CollisionDetector.cpp Header/CollisionDetector.h)

# Includi le librerie SFML
target_link_libraries(Jumper sfml-graphics sfml-audio sfml-windows)

# Configurazioni per macOS
if (APPLE)
    set_target_properties(Jumper PROPERTIES
            MACOSX_BUNDLE TRUE
            MACOSX_BUNDLE_BUNDLE_NAME "<nome_del_tuo_eseguibile>"
            MACOSX_BUNDLE_BUNDLE_VERSION "1.0"
            )
endif()

# Configurazioni per Windows
if (WIN32)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup")
endif()