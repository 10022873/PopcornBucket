#include "PopcornBucket.h"

// Default constructor
PopcornBucket::PopcornBucket() : m_name(""), m_flavor(0) {}

// Overloaded constructor
PopcornBucket::PopcornBucket(string name, int type) : m_name(name), m_flavor(type) {}

// Getter for m_name
string PopcornBucket::GetName() {
    return m_name;
}

// Getter for m_flavor
int PopcornBucket::GetFlavor() {
    return m_flavor;
}

// Setter for m_name
void PopcornBucket::SetName(string name) {
    m_name = name;
}

// Setter for m_flavor
void PopcornBucket::SetFlavor(int flavor) {
    m_flavor = flavor;
}
