# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TP1_QT_1_CM_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TP1_QT_1_CM_autogen.dir\\ParseCache.txt"
  "TP1_QT_1_CM_autogen"
  )
endif()
