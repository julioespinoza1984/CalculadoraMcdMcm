#ifndef MCDTEST_H
#define MCDTEST_H

#include <testsuite.h>

namespace calMcdMcm {
namespace model {

class McdTest : public TestSuite
{
    Q_OBJECT

public:
    McdTest();

private slots:
    void testMcd1();
    void testMcd2();
    void testMcd3();
    void testMcd4();
};

}
}

#endif // MCDTEST_H
