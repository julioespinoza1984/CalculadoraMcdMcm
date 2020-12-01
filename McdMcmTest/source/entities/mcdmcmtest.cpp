#include "mcdmcmtest.h"
#include <model/mcdmcmmodel.h>

#include <QtTest>

namespace calMcdMcm {
namespace model {   // Instance

static McdMcmTest instance;

McdMcmTest::McdMcmTest()
    : TestSuite("McdMcmTest")
{
}

} // end namespace model

namespace model { // Test

void McdMcmTest::testMcd1()
{
    McdMcmModel model;
    model.setValue(15);
    model.setValue(30);
    QCOMPARE(model.mcd(), QString("MCD(15, 30) = 15"));
    model.setBegin(true);
    model.setValue(8);
    model.setValue(12);
    QCOMPARE(model.mcd(), QString("MCD(8, 12) = 4"));
    model.setBegin(true);
    model.setValue(9);
    model.setValue(18);
    QCOMPARE(model.mcd(), QString("MCD(9, 18) = 9"));
    model.setBegin(true);
    model.setValue(20);
    model.setValue(16);
    QCOMPARE(model.mcd(), QString("MCD(20, 16) = 4"));
    model.setBegin(true);
    model.setValue(18);
    model.setValue(24);
    QCOMPARE(model.mcd(), QString("MCD(18, 24) = 6"));
    model.setBegin(true);
    model.setValue(21);
    model.setValue(28);
    QCOMPARE(model.mcd(), QString("MCD(21, 28) = 7"));
    model.setBegin(true);
/*
    mcdMcm.setValue(24, 32);
    assertEquals(mcdMcm.getMcd(), 8);
    mcdMcm.setValue(3, 6);
    mcdMcm.add(9);
    assertEquals(mcdMcm.getMcd(), 3);
    mcdMcm.setValue(7,14);
    mcdMcm.add(21);
    assertEquals(mcdMcm.getMcd(), 7);
    mcdMcm.setValue(18, 27);
    mcdMcm.add(36);
    assertEquals(mcdMcm.getMcd(), 9);
    mcdMcm.setValue(24, 36);
    mcdMcm.add(72);
    assertEquals(mcdMcm.getMcd(), 12);
    mcdMcm.setValue(30, 42);
    mcdMcm.add(54);
    assertEquals(mcdMcm.getMcd(), 6);
    mcdMcm.setValue(16, 24);
    mcdMcm.add(40);
    assertEquals(mcdMcm.getMcd(), 8);
    mcdMcm.setValue(22, 33);
    mcdMcm.add(44);
    assertEquals(mcdMcm.getMcd(), 11);

    mcdMcm.setValue(20, 28);
    mcdMcm.add(36);
    mcdMcm.add(40);
    assertEquals(mcdMcm.getMcd(), 4);
    mcdMcm.setValue(15, 20);
    mcdMcm.add(30);
    mcdMcm.add(60);
    assertEquals(mcdMcm.getMcd(), 5);
    mcdMcm.setValue(28, 42);
    mcdMcm.add(56);
    mcdMcm.add(70);
    assertEquals(mcdMcm.getMcd(), 14);
    mcdMcm.setValue(32, 48);
    mcdMcm.add(64);
    mcdMcm.add(80);
    assertEquals(mcdMcm.getMcd(), 16);
*/
}
void McdMcmTest::testMcd2() {}
void McdMcmTest::testMcd3() {}
void McdMcmTest::testMcd4() {}
void McdMcmTest::testMcm1() {}
void McdMcmTest::testMcm2() {}
void McdMcmTest::testMcm3() {}
void McdMcmTest::testMcm4() {}

}
}
