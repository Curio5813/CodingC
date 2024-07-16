cmake_minimum_required(VERSION 3.28)
project(CodingC C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_STANDARD_LIBRARIES "${CMAKE_C_STANDARD_LIBRARIES} -lm")


add_executable(CodingC
        beecrowd/lajotas_hexagonais.c

)




