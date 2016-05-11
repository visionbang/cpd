#include "test/support.hpp"
#include "utils.hpp"

namespace cpd {

class UtilsTest : public FishTest {};

TEST_F(UtilsTest, G) {
    Matrix expected = load_test_data_matrix("fish-G.txt");
    Matrix actual = construct_affinity_matrix(m_fish2, m_fish2, 3);
    std::cout << actual << std::endl;
    EXPECT_EQ(expected.size(), actual.size());
    EXPECT_TRUE(expected.isApprox(actual, 1e-4));
}
}