#ifndef TESTSUITE_H
#define TESTSUITE_H

#include <QObject>
#include <QString>

#include <vector>

namespace calMcdMcm {

class TestSuite : public QObject
{
    Q_OBJECT
public:
    explicit TestSuite(const QString& = "");
    virtual ~TestSuite();

    QString testName;
    static std::vector<TestSuite*>& testList();
};

} // end namespace calMcdMcmTest

#endif // TESTSUITE_H
