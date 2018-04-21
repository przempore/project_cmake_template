#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "inner_class.hpp"

namespace project_ns::inner_namespace::test
{

using namespace project_ns::inner_namespace;

namespace
{
constexpr auto CONSTANT = 42;
}

TEST(inner_class_test, test1)
{
    EXPECT_EQ(CONSTANT, inner_answear());
}

}
