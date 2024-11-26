# Version minimale de CMake
cmake_minimum_required(VERSION 3.5)

# Nom du projet
project(PlayerProject LANGUAGES CXX)

# Définit la version de C++ à utiliser
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ajoute le répertoire include/ aux chemins d'inclusion
include_directories(${CMAKE_SOURCE_DIR}/include)

# Ajoute l'exécutable
add_executable(PlayerProject
    src/main.cpp
    src/Player.cpp
    src/GameBoard.cpp
)
