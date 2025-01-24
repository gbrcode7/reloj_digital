# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/ESP32/Espressif/frameworks/esp-idf-v5.0.2/components/bootloader/subproject"
  "D:/Proyectos TV youtube/19. Pantalla TFT/1. Codigo/reloj_digital/build/bootloader"
  "D:/Proyectos TV youtube/19. Pantalla TFT/1. Codigo/reloj_digital/build/bootloader-prefix"
  "D:/Proyectos TV youtube/19. Pantalla TFT/1. Codigo/reloj_digital/build/bootloader-prefix/tmp"
  "D:/Proyectos TV youtube/19. Pantalla TFT/1. Codigo/reloj_digital/build/bootloader-prefix/src/bootloader-stamp"
  "D:/Proyectos TV youtube/19. Pantalla TFT/1. Codigo/reloj_digital/build/bootloader-prefix/src"
  "D:/Proyectos TV youtube/19. Pantalla TFT/1. Codigo/reloj_digital/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Proyectos TV youtube/19. Pantalla TFT/1. Codigo/reloj_digital/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Proyectos TV youtube/19. Pantalla TFT/1. Codigo/reloj_digital/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
