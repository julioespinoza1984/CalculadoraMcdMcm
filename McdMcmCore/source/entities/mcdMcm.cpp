#include "mcdMcm.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

namespace calMcdMcm {
namespace entities {

McdMcm::McdMcm()
{
    m_mcmMax = static_cast<unsigned long>(pow(2, sizeof (m_mcm) * 8) - 1);
    cout << "m_mcmMax = " << m_mcmMax << endl;
}

McdMcm::~McdMcm()
{
    cout << "Destructor de McdMcm " << endl;
}

void McdMcm::setValue(const unsigned long a, const unsigned long b)
{
    //    cout << "setValue a: " << a << "\tb: " << b << endl;
    m_invalido = a >= m_mcmMax || b >= m_mcmMax;
    if(m_invalido) {
        return;
    }
    m_mcd = getMcd(a, b);
    if(m_mcd == 0) {
        m_mcm = 0;
    } else {
        if(a > b) {
            m_mcm = (a/m_mcd) * b;
        } else {
            m_mcm = (b/m_mcd) * a;
        }
        m_invalido = m_invalido || (m_mcm <= 0 || m_mcm >= m_mcmMax);
    }
    m_oss.str("");
    m_oss << a << m_s << b;
    //    cout << "oss " << oss.str() << endl;
}

unsigned long McdMcm::getMcd() const
{
    return m_mcd;
}

unsigned long McdMcm::getMcm() const
{
    return m_mcm;
}

std::string McdMcm::getMcdtoString() const
{
    if(m_invalido) {
        std::string s1("MCD Inválido - Mayor que la Capacidad del dispositivo");
        return s1;
    }
    if(m_mcd <= 0) {
        std::string s1("MCD Inválido - 0");
        return s1;
    }
    std::string s1("MCD(");
    std::string s2(") = ");
    std::ostringstream oss2;

    oss2 << s1 << m_oss.str() << s2 << m_mcd;
    return oss2.str();
}

std::string McdMcm::getMcmtoString() const
{
    if(m_invalido) {
        std::string s1("MCD Inválido - Mayor que la Capacidad del dispositivo");
        return s1;
    }
    if(m_mcm <= 0) {
        std::string s1("MCM Inválido - 0");
        return s1;
    }
    std::string s1("MCM(");
    std::string s2(") = ");
    std::ostringstream oss2;

    oss2 << s1 << m_oss.str() << s2 << m_mcm;
    return oss2.str();
}

void McdMcm::add(const unsigned long a)
{
    //   cout << "Add a: " << a << endl;
    m_invalido = m_invalido || (a >= m_mcmMax);
    if(m_invalido) return;
    m_mcd = getMcd(a, m_mcd);
    unsigned long mcdTemp = getMcd(a, m_mcm);
    if(mcdTemp == 0) {
        m_mcm = 0;
    } else {
        m_mcm *= a/mcdTemp;
        m_invalido = m_invalido || (m_mcm <= 0 || m_mcm >= m_mcmMax);
    }
    m_oss << m_s << a;
    //    cout << "oss " << oss.str() << endl;
}

unsigned long McdMcm::getMcd(unsigned long a, unsigned long b)
{
    //    cout << "Calculando Mcd(" << a << ", " << b << ")" << endl;
    if(b > 0) {
        unsigned long temp;
        while(a > 0) {
            if(a < b) {
                temp = a;
                a = b;
                b = temp;
            }
            a -= b;
        }
    }
    //    cout << "Calculado Mcd(" << a << ", " << b << ") = " << b << endl;
    return b;
}

}
}
