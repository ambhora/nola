# --------------------------------------------------------------------------------------------------
# SPDX-License-Identifier: Apache-2.0
# SPDX-FileCopyrightText: 2026 nola developers
# --------------------------------------------------------------------------------------------------
find_package(Catch2 3 CONFIG REQUIRED)

besa_add_library(
  NAME libtestnola
  TYPE STATIC
  INSTALL FALSE
  SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/lib/testnola.cpp"
  PUBLIC_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

besa_test_add_directory(
  NAME unit
  PREFIX nola
  TARGET_LIST nola::libtestnola Catch2::Catch2WithMain
  LABELS unit
)
