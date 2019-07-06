#include "helloworld.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(HellowWorld, HellowWorldRes)
{
  std::string Tmp = HelloWorld();
  ASSERT_EQ(Tmp.compare("Hello, World!"), 0);
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  int Res = RUN_ALL_TESTS();
  return Res;
}