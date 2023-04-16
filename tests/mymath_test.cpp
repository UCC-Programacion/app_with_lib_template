#include <gtest/gtest.h>
#include <mymath/my_math.h>

namespace {

TEST(MyMathTest, Sum_1_2) {
  const auto expected = 3;
  const auto actual = mymath::sum(1, 2);
  ASSERT_EQ(expected, actual);
}

} // namespace
