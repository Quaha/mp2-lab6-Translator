# Install script for directory: C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/install/x86-Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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
  # Include the install script for the subdirectory.
  include("C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/runtime/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/antlr4-runtime/antlr4-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/antlr4-runtime/antlr4-targets.cmake"
         "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/CMakeFiles/Export/b687d5edce7d360f0dcc0a9573266ef6/antlr4-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/antlr4-runtime/antlr4-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/antlr4-runtime/antlr4-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/antlr4-runtime" TYPE FILE FILES "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/CMakeFiles/Export/b687d5edce7d360f0dcc0a9573266ef6/antlr4-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/antlr4-runtime" TYPE FILE FILES "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/CMakeFiles/Export/b687d5edce7d360f0dcc0a9573266ef6/antlr4-targets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/antlr4-runtime" TYPE FILE FILES
    "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/antlr4-runtime-config.cmake"
    "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/antlr4-runtime-config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/antlr4-generator" TYPE FILE FILES
    "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/antlr4-generator-config.cmake"
    "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/antlr4-generator-config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/libantlr4" TYPE FILE FILES
    "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/README.md"
    "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/VERSION"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
  file(WRITE "C:/Users/Артем/Desktop/AntlrProj/antlr_runtime_source/antlr4-4.13.2/runtime/Cpp/out/build/x86-Debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
