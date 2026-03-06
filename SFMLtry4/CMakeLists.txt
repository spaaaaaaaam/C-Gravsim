cmake_minimum_required(VERSION 3.24)
project(SFMLtry4)

set(CMAKE_CXX_STANDARD 20)

# Path to your SFML 3 install
set(SFML_DIR "C:/Users/SR0005/Documents/Libraries/SFML-3.0.2/lib/cmake/SFML")

# Find SFML — must include at least one valid component
find_package(SFML 3 REQUIRED COMPONENTS System Window Graphics)

add_executable(${PROJECT_NAME} main.cpp)

# Link to the SFML 3 CMake targets
target_link_libraries(${PROJECT_NAME}
        PRIVATE
        SFML::System
        SFML::Window
        SFML::Graphics
)