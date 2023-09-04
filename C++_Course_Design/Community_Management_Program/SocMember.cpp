#include "SocMember.h"

SocMember::SocMember(string name, string id, string age, string sex, string faculty,
    string major, string grade,string date,string position,string remark)
        :Student(name, id, age, sex, faculty, major, grade)
{
    setDate(date);
    setPosition(position);
    setRemark(remark);
}

SocMember::SocMember()
{
}

void SocMember::setDate(string date)
{
    this->date = date;
}

string SocMember::getDate() const
{
    return date;
}

void SocMember::setPosition(string position)
{
    this->position = position;
}

string SocMember::getPosition() const
{
    return position;
}

void SocMember::setRemark(string remark)
{
    this->remark = remark;
}

string SocMember::getRemark() const
{
    return remark;
}

ostream& operator<<(std::ostream& out, const  SocMember& member)
{
    out << member << member.date << " " << member.position << " " << member.remark << endl;
    return out;
}

std::istream& operator>>(std::istream& in, SocMember& member)
{
    in >> member >> member.date >> member.position >> member.remark;
    return in;
}
