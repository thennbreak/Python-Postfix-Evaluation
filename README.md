# Python-PostFix-Evaluation
A simple program to evaluate postfix expressions.  The python program will take a given postfix expression and solve it.


Given Postfix Expression: 2 3 + 5 1 - *

Result from the Python Program: **20**

**Steps:**
  
  1. First character scanned is '2' (operand), so push it to the stack
     - new_stack = [2]
  2. Second character scanned is '3' (operand), so push it to the stack
     - new_stack = [3,2]
  3. Third character scanned is '+' (operator), so pop '3' and '2' and evaluate 2 + 3 = 5, and finally push '5' to the stack
     - new_stack = [5]
  4. Foruth character scanned is '5' (operand), so push it to the stack
     - new_stack = [5.5]
  5. Fifth cahracter scanned is '1' (operand), so push it to the stack
     - new_stack = [1,5,5]
  6. Sixth character scanned is '-' (operator), so pop '1' and '5' and evaluate 5 - 1 = 4, and finally push '4' to the stack
     - new_stack = [4,5]
  7. Seventh character scanned is '*' (operator), so pop '4' and '5' and evaluate 5 * 4 = 20, and finally push '20' to the stack
     - new_stack = [20]
  8. Done scanning characters, so the remaining element in the stack '20' is the result of postfix evaluation.
