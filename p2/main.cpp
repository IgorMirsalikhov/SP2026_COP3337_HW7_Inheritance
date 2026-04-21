#include "Triangle.hpp"

int main(void) {
    
  
    // < operator
    std::cout << "(t2 < t1)  - " << ((t2 < t1)  ? "true\n" : "false\n");
    std::cout << "(t1 < t3)  - " << ((t1 < t3)  ? "true\n" : "false\n");
    std::cout << "(t2 < t3)  - " << ((t2 < t3)  ? "true\n" : "false\n");
    std::cout << "(t3 < t1)  - " << ((t3 < t1)  ? "true\n" : "false\n");
    std::cout << "(t3 < t2)  - " << ((t3 < t2)  ? "true\n" : "false\n");

    // >= operator
    std::cout << "(t1 >= t2) - " << ((t1 >= t2) ? "true\n" : "false\n");
    std::cout << "(t2 >= t1) - " << ((t2 >= t1) ? "true\n" : "false\n");
    std::cout << "(t1 >= t3) - " << ((t1 >= t3) ? "true\n" : "false\n");
    std::cout << "(t2 >= t3) - " << ((t2 >= t3) ? "true\n" : "false\n");
    std::cout << "(t3 >= t1) - " << ((t3 >= t1) ? "true\n" : "false\n");

    // != operator
    std::cout << "(t1 != t2) - " << ((t1 != t2) ? "true\n" : "false\n");
    std::cout << "(t2 != t1) - " << ((t2 != t1) ? "true\n" : "false\n");
    std::cout << "(t1 != t3) - " << ((t1 != t3) ? "true\n" : "false\n");
    std::cout << "(t2 != t3) - " << ((t2 != t3) ? "true\n" : "false\n");
    std::cout << "(t3 != t2) - " << ((t3 != t2) ? "true\n" : "false\n");
    std::cout << "(t1 != t1) - " << ((t1 != t1) ? "true\n" : "false\n"); 
    std::cout << "(t2 != t2) - " << ((t2 != t2) ? "true\n" : "false\n"); 
    std::cout << "(t3 != t3) - " << ((t3 != t3) ? "true\n" : "false\n");
    
    return 0;
}
