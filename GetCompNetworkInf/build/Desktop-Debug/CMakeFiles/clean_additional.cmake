# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/GetCompNetworkInf_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/GetCompNetworkInf_autogen.dir/ParseCache.txt"
  "GetCompNetworkInf_autogen"
  )
endif()
