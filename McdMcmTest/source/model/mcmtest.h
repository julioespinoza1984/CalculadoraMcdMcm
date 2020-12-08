#ifndef MCMTEST_H
#define MCMTEST_H

#include <testsuite.h>

namespace calMcdMcm {
namespace model {

class McmTest : public TestSuite
{
    Q_OBJECT

public:
    McmTest();

private slots:
    void testMcm1();
    void testMcm2();
    void testMcm3();
    void testMcm4();
};

}
}

#endif // MCMTEST_H
