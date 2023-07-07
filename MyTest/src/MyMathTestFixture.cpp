#include "MyMathTestFixture.h"

TEST_F(MyMathTestFixture, test1)
{

    ASSERT_EQ(a->add(0,0),0);
}


TEST_F(MyMathTestFixture, test2)
{
    
    ASSERT_EQ(a->sub(0,0),0);
}