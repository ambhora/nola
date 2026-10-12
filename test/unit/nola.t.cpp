// --------------------------------------------------------------------------------------------------
// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 nola developers
// --------------------------------------------------------------------------------------------------
#include <nola/test.hh>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("test library can be used independently of production sources") {
  REQUIRE(nola::test::smoke() == 42);
}
