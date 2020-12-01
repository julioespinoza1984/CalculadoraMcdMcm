#ifndef MCDMCMMODEL_H
#define MCDMCMMODEL_H

#include <QObject>
#include "mcdmcmcore_global.h"
#include "../entities/mcdMcm.h"

namespace calMcdMcm {
namespace model {

class MCDMCMCORESHARED_EXPORT McdMcmModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool begin WRITE setBegin NOTIFY beginChanged)
    Q_PROPERTY(unsigned long value WRITE setValue NOTIFY valueChanged)
    Q_PROPERTY(QString mcd READ mcd)
    Q_PROPERTY(QString mcm READ mcm)
public:
    void setBegin(bool);
    void setValue(unsigned long);
    QString mcd() const;
    QString mcm() const;
signals:
    void beginChanged();
    void valueChanged();

private:
    bool m_begin{true};
    bool m_begin2{false};
    unsigned long m_a{0};
    QString m_mcd;
    QString m_mcm;
    calMcdMcm::entities::McdMcm m_mcdMcm;
};

}
}

#endif // MCDMCMMODEL_H
