//
// Created by tudor on 16/03/2023.
//
#include "gtest/gtest.h"
#include "../Header/Player.h"
TEST(Player, getHealth){
    Player player;
    EXPECT_EQ(player.getHealth(), 3);
}
