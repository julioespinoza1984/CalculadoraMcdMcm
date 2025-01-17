#include "mcdtest.h"
#include <model/mcdmcmmodel.h>

#include <QtTest>

namespace calMcdMcm {
namespace model {   // Instance

static McdTest instance;

McdTest::McdTest()
    : TestSuite("McdTest")
{
}

} // end namespace model

namespace model { // Test

void McdTest::testMcd1()
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
    model.setValue(24);
    model.setValue(32);
    QCOMPARE(model.mcd(), QString("MCD(24, 32) = 8"));
    model.setBegin(true);
    model.setValue(3);
    model.setValue(6);
    model.setValue(9);
    QCOMPARE(model.mcd(), QString("MCD(3, 6, 9) = 3"));
    model.setBegin(true);
    model.setValue(7);
    model.setValue(14);
    model.setValue(21);
    QCOMPARE(model.mcd(), QString("MCD(7, 14, 21) = 7"));
    model.setBegin(true);
    model.setValue(18);
    model.setValue(27);
    model.setValue(36);
    QCOMPARE(model.mcd(), QString("MCD(18, 27, 36) = 9"));
    model.setBegin(true);
    model.setValue(24);
    model.setValue(36);
    model.setValue(72);
    QCOMPARE(model.mcd(), QString("MCD(24, 36, 72) = 12"));
    model.setBegin(true);
    model.setValue(30);
    model.setValue(42);
    model.setValue(54);
    QCOMPARE(model.mcd(), QString("MCD(30, 42, 54) = 6"));
    model.setBegin(true);
    model.setValue(16);
    model.setValue(24);
    model.setValue(40);
    QCOMPARE(model.mcd(), QString("MCD(16, 24, 40) = 8"));
    model.setBegin(true);
    model.setValue(22);
    model.setValue(33);
    model.setValue(44);
    QCOMPARE(model.mcd(), QString("MCD(22, 33, 44) = 11"));
    model.setBegin(true);
    model.setValue(20);
    model.setValue(28);
    model.setValue(36);
    model.setValue(40);
    QCOMPARE(model.mcd(), QString("MCD(20, 28, 36, 40) = 4"));

    model.setBegin(true);
    model.setValue(15);
    model.setValue(20);
    model.setValue(30);
    model.setValue(60);
    QCOMPARE(model.mcd(), QString("MCD(15, 20, 30, 60) = 5"));
    model.setBegin(true);
    model.setValue(28);
    model.setValue(42);
    model.setValue(56);
    model.setValue(70);
    QCOMPARE(model.mcd(), QString("MCD(28, 42, 56, 70) = 14"));
    model.setBegin(true);
    model.setValue(32);
    model.setValue(48);
    model.setValue(64);
    model.setValue(80);
    QCOMPARE(model.mcd(), QString("MCD(32, 48, 64, 80) = 16"));
}

void McdTest::testMcd2()
{
    McdMcmModel model;
    model.setValue(137);
    model.setValue(2603);
    QCOMPARE(model.mcd(), QString("MCD(137, 2603) = 137"));
    model.setBegin(true);
    model.setValue(1189);
    model.setValue(123656);
    QCOMPARE(model.mcd(), QString("MCD(1189, 123656) = 1189"));
    model.setBegin(true);
    model.setValue(144);
    model.setValue(520);
    QCOMPARE(model.mcd(), QString("MCD(144, 520) = 8"));
    model.setBegin(true);
    model.setValue(51);
    model.setValue(187);
    QCOMPARE(model.mcd(), QString("MCD(51, 187) = 17"));
    model.setBegin(true);
    model.setValue(76);
    model.setValue(1710);
    QCOMPARE(model.mcd(), QString("MCD(76, 1710) = 38"));
    model.setBegin(true);
    model.setValue(93);
    model.setValue(2387);
    QCOMPARE(model.mcd(), QString("MCD(93, 2387) = 31"));
    model.setBegin(true);
    model.setValue(111);
    model.setValue(518);
    QCOMPARE(model.mcd(), QString("MCD(111, 518) = 37"));
    model.setBegin(true);
    model.setValue(212);
    model.setValue(1431);
    QCOMPARE(model.mcd(), QString("MCD(212, 1431) = 53"));
    model.setBegin(true);
    model.setValue(948);
    model.setValue(1975);
    QCOMPARE(model.mcd(), QString("MCD(948, 1975) = 79"));
    model.setBegin(true);
    model.setValue(1164);
    model.setValue(3686);
    QCOMPARE(model.mcd(), QString("MCD(1164, 3686) = 194"));
    model.setBegin(true);
    model.setValue(303);
    model.setValue(1313);
    QCOMPARE(model.mcd(), QString("MCD(303, 1313) = 101"));
    model.setBegin(true);
    model.setValue(19578);
    model.setValue(47190);
    QCOMPARE(model.mcd(), QString("MCD(19578, 47190) = 78"));
    model.setBegin(true);
    model.setValue(19367);
    model.setValue(33277);
    QCOMPARE(model.mcd(), QString("MCD(19367, 33277) = 107"));
    model.setBegin(true);
    model.setValue(207207);
    model.setValue(479205);
    QCOMPARE(model.mcd(), QString("MCD(207207, 479205) = 207"));
    model.setBegin(true);
    model.setValue(9879);
    model.setValue(333555);
    QCOMPARE(model.mcd(), QString("MCD(9879, 333555) = 111"));
    model.setBegin(true);
    model.setValue(35211);
    model.setValue(198803);
    QCOMPARE(model.mcd(), QString("MCD(35211, 198803) = 121"));
    model.setBegin(true);
    model.setValue(77615);
    model.setValue(108661);
    QCOMPARE(model.mcd(), QString("MCD(77615, 108661) = 15523"));
    model.setBegin(true);
    model.setValue(65880);
    model.setValue(92415);
    QCOMPARE(model.mcd(), QString("MCD(65880, 92415) = 915"));
    model.setBegin(true);
    model.setValue(1002001);
    model.setValue(2136134);
    QCOMPARE(model.mcd(), QString("MCD(1002001, 2136134) = 11011"));
    model.setBegin(true);
    model.setValue(4008004);
    model.setValue(4280276);
    QCOMPARE(model.mcd(), QString("MCD(4008004, 4280276) = 4004"));
}

void McdTest::testMcd3()
{
    McdMcmModel model;
    model.setValue(2168);
    model.setValue(7336);
    model.setValue(9184);
    QCOMPARE(model.mcd(), QString("MCD(2168, 7336, 9184) = 8"));
    model.setBegin(true);
    model.setValue(425);
    model.setValue(800);
    model.setValue(950);
    QCOMPARE(model.mcd(), QString("MCD(425, 800, 950) = 25"));
    model.setBegin(true);
    model.setValue(1560);
    model.setValue(2400);
    model.setValue(5400);
    QCOMPARE(model.mcd(), QString("MCD(1560, 2400, 5400) = 120"));
    model.setBegin(true);
    model.setValue(78);
    model.setValue(130);
    model.setValue(143);
    QCOMPARE(model.mcd(), QString("MCD(78, 130, 143) = 13"));
    model.setBegin(true);
    model.setValue(153);
    model.setValue(357);
    model.setValue(187);
    QCOMPARE(model.mcd(), QString("MCD(153, 357, 187) = 17"));
    model.setBegin(true);
    model.setValue(236);
    model.setValue(590);
    model.setValue(1239);
    QCOMPARE(model.mcd(), QString("MCD(236, 590, 1239) = 59"));
    model.setBegin(true);
    model.setValue(465);
    model.setValue(651);
    model.setValue(682);
    QCOMPARE(model.mcd(), QString("MCD(465, 651, 682) = 31"));
    model.setBegin(true);
    model.setValue(136);
    model.setValue(204);
    model.setValue(221);
    model.setValue(272);
    QCOMPARE(model.mcd(), QString("MCD(136, 204, 221, 272) = 17"));
    model.setBegin(true);
    model.setValue(168);
    model.setValue(252);
    model.setValue(280);
    model.setValue(917);
    QCOMPARE(model.mcd(), QString("MCD(168, 252, 280, 917) = 7"));
    model.setBegin(true);
    model.setValue(770);
    model.setValue(990);
    model.setValue(1265);
    model.setValue(3388);
    QCOMPARE(model.mcd(), QString("MCD(770, 990, 1265, 3388) = 11"));
    model.setBegin(true);
    model.setValue(1240);
    model.setValue(1736);
    model.setValue(2852);
    model.setValue(3131);
    QCOMPARE(model.mcd(), QString("MCD(1240, 1736, 2852, 3131) = 31"));
    model.setBegin(true);
    model.setValue(31740);
    model.setValue(47610);
    model.setValue(95220);
    model.setValue(126960);
    QCOMPARE(model.mcd(), QString("MCD(31740, 47610, 95220, 126960) = 15870"));
    model.setBegin(true);
    model.setValue(45150);
    model.setValue(51600);
    model.setValue(78045);
    model.setValue(108489);
    QCOMPARE(model.mcd(), QString("MCD(45150, 51600, 78045, 108489) = 129"));
    model.setBegin(true);
    model.setValue(63860);
    model.setValue(66340);
    model.setValue(134385);
    model.setValue(206305);
    QCOMPARE(model.mcd(), QString("MCD(63860, 66340, 134385, 206305) = 155"));
    model.setBegin(true);
    model.setValue(500);
    model.setValue(560);
    model.setValue(725);
    model.setValue(4350);
    model.setValue(8200);
    QCOMPARE(model.mcd(), QString("MCD(500, 560, 725, 4350, 8200) = 5"));
    model.setBegin(true);
    model.setValue(432);
    model.setValue(648);
    model.setValue(756);
    model.setValue(702);
    model.setValue(621);
    QCOMPARE(model.mcd(), QString("MCD(432, 648, 756, 702, 621) = 27"));
    model.setBegin(true);
    model.setValue(3240);
    model.setValue(5400);
    model.setValue(5490);
    model.setValue(6300);
    model.setValue(7110);
    QCOMPARE(model.mcd(), QString("MCD(3240, 5400, 5490, 6300, 7110) = 90"));
    model.setBegin(true);
    model.setValue(486);
    model.setValue(729);
    model.setValue(891);
    model.setValue(1944);
    model.setValue(4527);
    QCOMPARE(model.mcd(), QString("MCD(486, 729, 891, 1944, 4527) = 9"));
}

void McdTest::testMcd4()
{
    McdMcmModel model;
    model.setValue(20);
    model.setValue(80);
    QCOMPARE(model.mcd(), QString("MCD(20, 80) = 20"));
    model.setBegin(true);
    model.setValue(144);
    model.setValue(520);
    QCOMPARE(model.mcd(), QString("MCD(144, 520) = 8"));
    model.setBegin(true);
    model.setValue(345);
    model.setValue(850);
    QCOMPARE(model.mcd(), QString("MCD(345, 850) = 5"));
    model.setBegin(true);
    model.setValue(19578);
    model.setValue(47190);
    QCOMPARE(model.mcd(), QString("MCD(19578, 47190) = 78"));
    model.setBegin(true);
    model.setValue(33);
    model.setValue(77);
    model.setValue(121);
    QCOMPARE(model.mcd(), QString("MCD(33, 77, 121) = 11"));
    model.setBegin(true);
    model.setValue(425);
    model.setValue(800);
    model.setValue(950);
    QCOMPARE(model.mcd(), QString("MCD(425, 800, 950) = 25"));
    model.setBegin(true);
    model.setValue(2168);
    model.setValue(7336);
    model.setValue(9184);
    QCOMPARE(model.mcd(), QString("MCD(2168, 7336, 9184) = 8"));
    model.setBegin(true);
    model.setValue(54);
    model.setValue(76);
    model.setValue(114);
    model.setValue(234);
    QCOMPARE(model.mcd(), QString("MCD(54, 76, 114, 234) = 2"));
    model.setBegin(true);
    model.setValue(320);
    model.setValue(450);
    model.setValue(560);
    model.setValue(600);
    QCOMPARE(model.mcd(), QString("MCD(320, 450, 560, 600) = 10"));
    model.setBegin(true);
    model.setValue(858);
    model.setValue(2288);
    model.setValue(3575);
    QCOMPARE(model.mcd(), QString("MCD(858, 2288, 3575) = 143"));
    model.setBegin(true);
    model.setValue(464);
    model.setValue(812);
    model.setValue(870);
    QCOMPARE(model.mcd(), QString("MCD(464, 812, 870) = 58"));
    model.setBegin(true);
    model.setValue(98);
    model.setValue(294);
    model.setValue(392);
    model.setValue(1176);
    QCOMPARE(model.mcd(), QString("MCD(98, 294, 392, 1176) = 98"));
    model.setBegin(true);
    model.setValue(1560);
    model.setValue(2400);
    model.setValue(5400);
    model.setValue(6600);
    QCOMPARE(model.mcd(), QString("MCD(1560, 2400, 5400, 6600) = 120"));
    model.setBegin(true);
    model.setValue(840);
    model.setValue(960);
    model.setValue(7260);
    model.setValue(9135);
    QCOMPARE(model.mcd(), QString("MCD(840, 960, 7260, 9135) = 15"));
    model.setBegin(true);
    model.setValue(3174);
    model.setValue(4761);
    model.setValue(9522);
    model.setValue(12696);
    QCOMPARE(model.mcd(), QString("MCD(3174, 4761, 9522, 12696) = 1587"));
    model.setBegin(true);
    model.setValue(171);
    model.setValue(342);
    model.setValue(513);
    model.setValue(684);
    QCOMPARE(model.mcd(), QString("MCD(171, 342, 513, 684) = 171"));
    model.setBegin(true);
    model.setValue(500);
    model.setValue(560);
    model.setValue(725);
    model.setValue(4350);
    model.setValue(8200);
    QCOMPARE(model.mcd(), QString("MCD(500, 560, 725, 4350, 8200) = 5"));
    model.setBegin(true);
    model.setValue(850);
    model.setValue(2550);
    model.setValue(4250);
    model.setValue(12750);
    QCOMPARE(model.mcd(), QString("MCD(850, 2550, 4250, 12750) = 850"));
    model.setBegin(true);
    model.setValue(465);
    model.setValue(744);
    model.setValue(837);
    model.setValue(2511);
    QCOMPARE(model.mcd(), QString("MCD(465, 744, 837, 2511) = 93"));
    model.setBegin(true);
    model.setValue(600);
    model.setValue(1200);
    model.setValue(1800);
    model.setValue(4800);
    QCOMPARE(model.mcd(), QString("MCD(600, 1200, 1800, 4800) = 600"));
    model.setBegin(true);
    model.setValue(57);
    model.setValue(133);
    model.setValue(532);
    model.setValue(1824);
    QCOMPARE(model.mcd(), QString("MCD(57, 133, 532, 1824) = 19"));
    model.setBegin(true);
    model.setValue(2645);
    model.setValue(4232);
    model.setValue(4761);
    model.setValue(5819);
    QCOMPARE(model.mcd(), QString("MCD(2645, 4232, 4761, 5819) = 529"));
    model.setBegin(true);
    model.setValue(2523);
    model.setValue(5046);
    model.setValue(5887);
    model.setValue(7569);
    QCOMPARE(model.mcd(), QString("MCD(2523, 5046, 5887, 7569) = 841"));
    model.setBegin(true);
    model.setValue(961);
    model.setValue(2821);
    model.setValue(2418);
    model.setValue(10571);
    QCOMPARE(model.mcd(), QString("MCD(961, 2821, 2418, 10571) = 31"));
    model.setBegin(true);
    model.setValue(2738);
    model.setValue(9583);
    model.setValue(15059);
    model.setValue(3367);
    model.setValue(12691);
    QCOMPARE(model.mcd(), QString("MCD(2738, 9583, 15059, 3367, 12691) = 37"));
}

}
}
