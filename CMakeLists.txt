cmake_minimum_required(VERSION 3.17)
project(dsa)

set(CMAKE_CXX_STANDARD 17)

add_executable(dsa main.cpp)

add_executable(bit_countSetBits bit_manipulation/count_set_bits.cpp)
add_executable(bit_swapTwoNums bit_manipulation/swap_two_num.cpp)
add_executable(bit_numBitsSwap bit_manipulation/num_bits_swap.cpp)
add_executable(bit_single1 bit_manipulation/single_1.cpp)