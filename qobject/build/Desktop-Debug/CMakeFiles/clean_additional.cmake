# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qobject_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qobject_autogen.dir/ParseCache.txt"
  "qobject_autogen"
  )
endif()
