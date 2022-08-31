class currency
{
    int m_rub;
    int m_cop;
public:

    currency() {
        m_rub = 0;
        m_cop = 0;
    }

    currency(int a) {
        m_rub = a;
        m_cop = 0;
    }

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
    }

    int rub() {
        return m_rub;
    }

    int cop() {
        return m_cop;
    }

    /*currency round() const
    {
        if (m_cop >= 50) {
            return currency (m_rub + 1, 0);
        }
        else {
            return this;
        }
    }*/
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
};