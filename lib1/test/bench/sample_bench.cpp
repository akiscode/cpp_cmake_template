#include "hayai/hayai.hpp"

#include "lib1/common.hpp"

class SampleFixture :  public ::hayai::Fixture
{
public:
    virtual void SetUp()
    {
    }

    virtual void TearDown()
    {
    }

};

BENCHMARK_F(SampleFixture, smoke_test, 10, 100)
{
    lib1::test_func(1);
}

