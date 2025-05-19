# cmake_minimum_required(VERSION 4.0)
# project(clearwave_recorder)

# set(CMAKE_CXX_STANDARD 14)

# find_package(PkgConfig REQUIRED)
# pkg_check_modules(PORTAUDIO REQUIRED portaudio-2.0)

# add_executable(${PROJECT_NAME} main.cpp)

# # Add include and link directories
# include_directories(${PORTAUDIO_INCLUDE_DIRS})
# link_directories(${PORTAUDIO_LIBRARY_DIRS})
# target_link_libraries(${PROJECT_NAME} ${PORTAUDIO_LIBRARIES} portaudio)

cmake_minimum_required(VERSION 4.0)
project(clearwave_recorder)

set(CMAKE_CXX_STANDARD 14)

include_directories(/opt/homebrew/include /opt/homebrew/opt/portaudio/include)
link_directories(/opt/homebrew/lib /opt/homebrew/opt/portaudio/lib)

add_executable(${PROJECT_NAME} main.cpp audio_recorder.cpp)
target_link_libraries(${PROJECT_NAME} /opt/homebrew/lib/libportaudio.dylib)

