#include <iostream>
using namespace std;

// Single Inheritance

class Father {

};

class Son : Father {

};


// Multi-level Inheritance

class Father {

};

class Son : Father {

};

class Grandchild : Son {

};

// Multiple Inheritance 

class Father {

};

class Mother {

};

class Son : Mother, Father {

};

// Hierarchy

class Father {

};

class Son : Father {

};

class Son2 : Father {

};
