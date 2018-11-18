//
// Created by Anders Arnholm on 2018-11-18.
//

#include "tennis.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Love-All 0-0")
{
    REQUIRE("Love-All" == tennis_score(0, 0));
}


TEST_CASE("Fifteen-All 1-1")
{
    REQUIRE("Fifteen-All" == tennis_score(1, 1));
}

TEST_CASE("Thirty-All 2-2")
{
    REQUIRE("Thirty-All" == tennis_score(2, 2));
}

TEST_CASE("Deuce 3-3")
{
    REQUIRE("Deuce" == tennis_score(3, 3));
}

TEST_CASE("Deuce 4-4")
{
    REQUIRE("Deuce" == tennis_score(4, 4));
}

TEST_CASE("Fifteen-Love 1-0")
{
    REQUIRE("Fifteen-Love" == tennis_score(1, 0));
}

TEST_CASE("Love-Fifteen 0-1")
{
    REQUIRE("Love-Fifteen" == tennis_score(0, 1));
}

TEST_CASE("Thirty-Love 2-0")
{
    REQUIRE("Thirty-Love" == tennis_score(2, 0));
}

TEST_CASE("Love-Thirty 0-2")
{
    REQUIRE("Love-Thirty" == tennis_score(0, 2));
}

TEST_CASE("Forty-Love 3-0")
{
    REQUIRE("Forty-Love" == tennis_score(3, 0));
}

TEST_CASE("Love-Forty 0-3")
{
    REQUIRE("Love-Forty" == tennis_score(0, 3));
}

TEST_CASE("Win for player1 4-0")
{
    REQUIRE("Win for player1" == tennis_score(4, 0));
}

TEST_CASE("Win for player2 0-4")
{
    REQUIRE("Win for player2" == tennis_score(0, 4));
}

TEST_CASE("Thirty-Fifteen 2-1")
{
    REQUIRE("Thirty-Fifteen" == tennis_score(2, 1));
}

TEST_CASE("Fifteen-Thirty 1-2")
{
    REQUIRE("Fifteen-Thirty" == tennis_score(1, 2));
}

TEST_CASE("Forty-Fifteen 3-1")
{
    REQUIRE("Forty-Fifteen" == tennis_score(3, 1));
}

TEST_CASE("Fifteen-Forty 1-3")
{
    REQUIRE("Fifteen-Forty" == tennis_score(1, 3));
}

TEST_CASE("Win for player1 4-1")
{
    REQUIRE("Win for player1" == tennis_score(4, 1));
}

TEST_CASE("Win for player2 1-4")
{
    REQUIRE("Win for player2" == tennis_score(1, 4));
}

TEST_CASE("Forty-Thirty 3-2")
{
    REQUIRE("Forty-Thirty" == tennis_score(3, 2));
}

TEST_CASE("Thirty-Forty 2-3")
{
    REQUIRE("Thirty-Forty" == tennis_score(2, 3));
}

TEST_CASE("Win for player1 4-2")
{
    REQUIRE("Win for player1" == tennis_score(4, 2));
}

TEST_CASE("Win for player2 2-4")
{
    REQUIRE("Win for player2" == tennis_score(2, 4));
}

TEST_CASE("Advantage player1 4-3")
{
    REQUIRE("Advantage player1" == tennis_score(4, 3));
}

TEST_CASE("Advantage player2 3-4")
{
    REQUIRE("Advantage player2" == tennis_score(3, 4));
}

TEST_CASE("Advantage player1 5-4")
{
    REQUIRE("Advantage player1" == tennis_score(5, 4));
}

TEST_CASE("Advantage player2 4-5")
{
    REQUIRE("Advantage player2" == tennis_score(4, 5));
}

TEST_CASE("Advantage player1 15-14")
{
    REQUIRE("Advantage player1" == tennis_score(15, 14));
}

TEST_CASE("Advantage player2 14-15")
{
    REQUIRE("Advantage player2" == tennis_score(14, 15));
}

TEST_CASE("Win for player1 6-4")
{
    REQUIRE("Win for player1" == tennis_score(6, 4));
}

TEST_CASE("Win for player2 4-6")
{
    REQUIRE("Win for player2" == tennis_score(4, 6));
}

TEST_CASE("Win for player1 16-14")
{
    REQUIRE("Win for player1" == tennis_score(16, 14));
}

TEST_CASE("Win for player2 14-16")
{
    REQUIRE("Win for player2" == tennis_score(14, 16));
}