#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST(exampleTest, test1)
{
ASSERT_EQ(1,1);
}

// int main(int argc, char **argv)
// {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }