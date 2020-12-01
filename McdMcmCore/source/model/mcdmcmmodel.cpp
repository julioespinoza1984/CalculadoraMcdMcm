#include "mcdmcmmodel.h"

namespace calMcdMcm {
namespace model {

void McdMcmModel::setBegin(bool)
{
    m_begin = true;
    m_begin2 = false;
    emit beginChanged();
}

void McdMcmModel::setValue(unsigned long value)
{
    if(m_begin) {
        if(m_begin2) {
            m_mcdMcm.setValue(m_a, value);
            m_mcd = QString::fromStdString(m_mcdMcm.getMcdtoString());
            m_mcm = QString::fromStdString(m_mcdMcm.getMcmtoString());
            m_begin = false;
            m_begin2 = false;
        } else {
            m_a = value;
            m_mcd = QString("MCD(%1, Esperando 2do Valor)").arg(m_a);
            m_mcm = QString("MCM(%1, Esperando 2do Valor)").arg(m_a);
            m_begin2 = true;
        }
    } else {
        m_mcdMcm.add(value);
        m_mcd = QString::fromStdString(m_mcdMcm.getMcdtoString());
        m_mcm = QString::fromStdString(m_mcdMcm.getMcmtoString());
    }
    emit valueChanged();
}

QString McdMcmModel::mcd() const
{
    return m_mcd;
}

QString McdMcmModel::mcm() const
{
    return m_mcm;
}

}
}
