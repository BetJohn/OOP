cmake_minimum_required(VERSION 3.19)
project(oop)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop main.cpp Haina.cpp Haina.h Pantof.cpp Pantof.h Sifonier.cpp Sifonier.h Camasa.cpp Camasa.h Pantalon.cpp Pantalon.h Exceptie.cpp Exceptie.h Palarie.cpp Palarie.h ExceptiePret.cpp ExceptiePret.h Haina_factory.cpp Haina_factory.h PantofBuilder.cpp PantofBuilder.h Sursa.h Sursa.cpp Sursa_impl.cpp Aplicatie.cpp Aplicatie.h Outfit.cpp Outfit.h OutfitBuilder.cpp OutfitBuilder.h ExceptieModa.cpp ExceptieModa.h)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)