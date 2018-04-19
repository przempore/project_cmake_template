#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "class_file.hpp"

namespace project_namespace
{


namespace
{
constexpr auto CONSTANT = 42;
}

TEST(project_test, test1)
{
    EXPECT_EQ(42, function());
}

}
