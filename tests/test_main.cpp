#include "Optimizer.hpp"
#include <cassert>
#include <string>

void test_int_optimizer() {
    RouteOptimizer<int> opt;
    opt.addPoint(10);
    opt.addPoint(20);
    
    // בבדיקה פשוטה אנחנו משתמשים ב-assert 
    // אם התנאי לא מתקיים, התוכנית תע
