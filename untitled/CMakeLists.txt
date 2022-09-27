cmake_minimum_required(VERSION 3.23)
project(untitled)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Playing_cell.cpp Playing_cell.h Playing_map.cpp Playing_map.h Player.cpp Player.h Move.cpp Move.h Event_playing.cpp Event_playing.h Playing_cell_view.cpp Playing_cell_view.h Playing_map_view.cpp Playing_map_view.h Command_reader.cpp Command_reader.h)
target_link_libraries(untitled sfml-graphics sfml-audio)