#include <cstddef>
#ifndef Bigint
#define Bigint 202211191746L

class bigint {
    char   *data;
    size_t  size;
    bool    neg ;
    
  public:
    bigint();
    bigint(const bigint&);
   ~bigint();
    
    explicit bigint(long);
    explicit bigint(unsigned long);
    explicit bigint(const char*);
    
    void print() const;
    
    static bigint add(const bigint& left, const bigint& right);
    static bigint sub(const bigint& left, const bigint& right);
    static bigint mul(const bigint& left, const bigint& right);
    static bigint div(const bigint& left, const bigint& right);
    static bigint div(const bigint& left, const bigint& right, bigint& rest);
};

#endif /*bigint*/