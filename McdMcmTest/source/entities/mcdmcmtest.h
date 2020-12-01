#ifndef MCDMCMTEST_H
#define MCDMCMTEST_H

#include <testsuite.h>


namespace calMcdMcm {
namespace model {

class McdMcmTest : public TestSuite
{
    Q_OBJECT

public:
    McdMcmTest();

private slots:
    void testMcd1();
    void testMcd2();
    void testMcd3();
    void testMcd4();
    void testMcm1();
    void testMcm2();
    void testMcm3();
    void testMcm4();
};

}
}

#endif // MCDMCMTEST_H
