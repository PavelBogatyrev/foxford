class currency
{
    int m_rub;
    int m_cop;
public:
    //currency() {
    //    m_rub = 0;
    //    m_cop = 0;
    //}

    //currency(int a) {
    //    m_rub = a;
    //    m_cop = 0;
    //}

    currency(int a = 0, int b = 0) {
        m_rub = a;
        if (b > 99) {
            m_rub += b / 100;
            m_cop = b % 100;
        }
        else {
            m_cop = b;
        }
    }

    void print() {
        printf("%d-%02d", m_rub, m_cop);
        cout << endl;
    }

    int rub() {
        return m_rub;
    }

    int cop() {
        return m_cop;
    }

    void setRub(int rub) {
        m_rub = rub;
    }

    void setCop(int cop) {
        m_cop = cop;
    }


    currency round() const
    {
        if (m_cop >= 50) {
            return currency(m_rub + 1, 0);
        }
        else {
            return *this;
        }
    }
    bool operator <(currency& other) {
        return m_rub < other.m_rub || (m_rub == other.m_rub && m_cop < other.m_cop);
    }

    bool operator ==(currency& other) {
        return (!(*this < other) && !(other < *this));
    }

    bool operator !=(currency& other) {
        return !(*this == other);
    }

    bool operator <=(currency& other) {
        return *this < other || *this == other;
    }

    bool operator >(currency& other) {
        return !(*this <= other);
    }

    bool operator >=(currency& other) {
        return !(*this < other);
    }
    currency operator +(const currency& other) {
        return currency(m_rub + other.m_rub, m_cop + other.m_cop);
    }

    currency operator -(const currency& other) {
        return currency(m_rub - other.m_rub, m_cop - other.m_cop);
    }
    friend istream& operator >>(istream&, currency&);
    friend currency operator*(int n, const currency& s);
    friend currency operator*(const currency& s, int n);

};

ostream& operator <<(ostream& out, currency s) {
    out << s.rub() << '-' << setfill('0') << setw(2) << s.cop();
    return out;
}

istream& operator >>(istream& in, currency& s) {
    int rub, cop;
    in >> rub >> cop;
    currency tmp(rub, cop);
    s.m_rub = tmp.rub();
    s.m_cop = tmp.cop();
    return in;
}


currency operator*(int n, const currency& s)
{
    int cop = s.m_rub * 100 + s.m_cop;
    cop *= n;
    return currency(0, cop);
}

currency operator*(const currency& s, int n)
{
    int cop = s.m_rub * 100 + s.m_cop;
    cop *= n;
    return currency(0, cop);
}