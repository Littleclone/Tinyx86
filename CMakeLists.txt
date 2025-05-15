cmake_minimum_required(VERSION 3.31)
project(Tinyx86 C)

# Setze den Standard für die C-Sprache
set(CMAKE_C_STANDARD 17)

# Lege den Ausgabeort für alle ausführbaren Dateien fest
# ${CMAKE_BINARY_DIR} ist das Build-Verzeichnis, und "build" ist ein Unterordner darin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

# Füge die ausführbare Datei hinzu
add_executable(${PROJECT_NAME} main.c)