#include <iostream>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

class RS232 {};

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
    RS232 rs;
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}