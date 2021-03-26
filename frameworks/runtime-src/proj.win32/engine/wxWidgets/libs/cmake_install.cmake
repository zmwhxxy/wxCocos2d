# Install script for directory: F:/wxCocos2d/frameworks/wxWidgets/build/cmake/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/wxcocos2d")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/base/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/net/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/core/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/adv/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/aui/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/html/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/propgrid/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/ribbon/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/richtext/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/webview/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/stc/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/xrc/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/media/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/gl/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/qa/cmake_install.cmake")
  include("F:/wxCocos2d/frameworks/runtime-src/proj.win32/engine/wxWidgets/libs/xml/cmake_install.cmake")

endif()

