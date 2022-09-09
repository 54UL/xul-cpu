# GENERIC CMAKE 
project(XUL_LAB_SUITE LANGUAGES CXX)
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC OFF)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_FLAGS "-lX11 -lpthread ${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_PREFIX_PATH "/opt/Qt/5.12.5/gcc_64/lib/cmake")
set(QT_5_PATH "/usr/include/x86_64-linux-gnu/qt5/")

# COMPILE CONFIGURATIONS
set(XUL_SUITE_DEBUG ON)# shows verbose cmake messages, runtime and compile time
set(APP_DEPLOY_MODE "UI_APP")# TERMINAL_APP, UI_APP
set(XUL_LAB_TARGET "ASSEMBLER")# ALL, ASSEMBLER, EMULATOR, ...

# DEFINITIONS AND PRE COMPILE LOGIC
add_definitions(-D${APP_DEPLOY_MODE}="true")

if(NOT ${XUL_LAB_TARGET} STREQUAL  "")
	message("-- [CURRENT SUITE TARGET : ${XUL_LAB_TARGET}] --")
	add_definitions(-DXUL_LAB_TARGET="${XUL_LAB_TARGET}")
else()
	message("ERROR: XUL_LAB_TARGET NOT SPECIFIED")
endif()

#QT STUFF
find_package(Qt5 COMPONENTS Core Quick Widgets REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS} ${QtQml_INCLUDE_DIRS} ${QT_5_PATH})
add_definitions(${Qt5Widgets_DEFINITIONS} ${QtQml_DEFINITIONS} ${Qt5Quick_DEFINITIONS} )

if(${XUL_SUITE_DEBUG})
	message("-- [DEBUG MESSAGES ON] --")
	message ("QT PREFIX PATH : [${CMAKE_PREFIX_PATH}]")
	message("include QT dirs:\n ${Qt5Widgets_INCLUDE_DIRS} ${QtQml_INCLUDE_DIRS}")
	message("QT definitions:\n ${Qt5Widgets_DEFINITIONS} ${QtQml_DEFINITIONS} ${Qt5Quick_DEFINITIONS}")
endif()

#ASSEMBLER SOURCES and RESOURCES
file(GLOB_RECURSE XUL_SUITE_SOURCES "emulator/*.cpp")
file(GLOB_RECURSE XUL_SUITE_HEADERS "emulator/include/*.h")
set(XUL_SUITE_RESOURCES "emulator/resources/qml.qrc")

#-------------------------------------------------------------------------------------------------
# XUL_SUITE APP (CMD, UI) 
#-------------------------------------------------------------------------------------------------
add_executable(XUL_LAB_SUITE ${XUL_SUITE_HEADERS} ${XUL_SUITE_SOURCES} ${XUL_SUITE_RESOURCES})
target_link_libraries(XUL_LAB_SUITE  PUBLIC Qt5::Core Qt5::Quick Qt5::Widgets)


