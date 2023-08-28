#include <gtest/gtest.h>

#include "lib1/common.hpp"
#include "app1/common.hpp"

class SampleTestFixture : public ::testing::Test
{
    void SetUp() override
    {
    }

    void TearDown() override
    {
    }

};

TEST_F(SampleTestFixture, smoke_test)
{
    lib1::test_func(1);
    app1::test_func('c');

    ASSERT_EQ(true, true);
}
