# Handle dependencies

# OpenGL
find_package(OpenGL REQUIRED)

# GLFW
set( GLFW_BUILD_DOCS OFF CACHE BOOL  "GLFW lib only" )
set( GLFW_INSTALL OFF CACHE BOOL  "GLFW lib only" )
add_subdirectory(glfw)

# Glad
add_subdirectory(glad)