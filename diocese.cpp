#include "diocese.h"

class DioceseData : public QSharedData
{
public:

};

Diocese::Diocese() : data(new DioceseData)
{

}

Diocese::Diocese(const Diocese &rhs)
    : data{rhs.data}
{

}

Diocese &Diocese::operator=(const Diocese &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

Diocese::~Diocese()
{

}
