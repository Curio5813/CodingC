cmake_minimum_required(VERSION 3.28)
project(CodingC C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_STANDARD_LIBRARIES "${CMAKE_C_STANDARD_LIBRARIES} -lm")
set(CMAKE_C_STANDARD_LIBRARIES "${CMAKE_C_STANDARD_LIBRARIES} -lgmp")


add_executable(CodingC
        beecrowd/receita_de_bolo.c

)




