#ifndef MYMATH_TEST_FIXTURE_
#define MYMATH_TEST_FIXTURE_

#include "MyMath.h"
#include <gtest/gtest.h>

#include <iostream>

class MyMathTestFixture : public testing::Test
{
    protected:
    MyMath *a;
    public:
    MyMathTestFixture()
    {
        std::cout<<"MyMathTestFixture CTOR"<<std::endl;
        a = new MyMath();
    }
    ~MyMathTestFixture()
    {
        std::cout<<"MyMathTestFixture DTOR"<<std::endl;
        delete a;

    }
    void SetUp() override
    {
        std::cout<<"MyMathTestFixture SetUp"<<std::endl;

    }
    void TearDown() override
    {
        std::cout<<"MyMathTestFixture TearDown"<<std::endl;

    }
};

#endif