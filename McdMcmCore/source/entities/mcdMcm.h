#ifndef MCDMCM_H
#define MCDMCM_H

#include <string>
#include <sstream>

namespace calMcdMcm {
namespace entities {

class McdMcm {
public:
    McdMcm();
    ~McdMcm();

    void add(const unsigned long);
    void setValue(const unsigned long, const unsigned long);
    unsigned long getMcd() const;
    unsigned long getMcm() const;

    std::string getMcdtoString() const;
    std::string getMcmtoString() const;
private:
    unsigned long getMcd(unsigned long, unsigned long);

    unsigned long m_mcd{0};
    unsigned long m_mcm{0};
    unsigned long m_mcmMax{0};
    bool m_invalido{false};
    std::string m_s{", "};
    std::ostringstream m_oss;
};

}
}

#endif // MCDMCM_H
