# cmathparser
A library to parse mathematical equations in C.

## Usage
------------------
### Supported Operations
`+ - * / % ^ ( ) sin cos tan csc sec cot asin acos atan min max`

### `token_t tokenize(const char* exp);`
This function takes in a C string and tokenizes and returns the head of a linked list of `token_t`s.

### `token_t infix_to_postfix(token_t tokens);`
This function takes a linked list of `token_t`s generated by `tokenize()` and returns them in *RPN* (Reverse Polish Notation).

### `expr_tree_t generate_expression_tree(token_t tokens);`
This function takes in a linked list of `token_t`s in *RPN* and generates an expression tree using the `expr_tree_node` structure, and it returns a pointer to the root node.

### `double calculate(expr_tree_t exp_tree);`
This function takes in an expression tree and recursively calculates the solution of the tree, and returns it as a `double`.

### `double evaluate(const char* exp);`
This function combines all the previous fuctions in the correct order and returns the calculated answer. **NOTE** this should be the primary function used, as it also cleans up the heap after it calculates the answer.

### `void free_token(token_t token);`
Deallocates all elements in a linked list of `token_t`s.

### `void free_tree(expr_tree_t tree);`
Deallocates all elements in an expression tree.

### `double min(double x, double y);`
returns the minimum value of `x` and `y`.

### `double max(double x, double y);`
returns the maximum value of `x` and `y`.

### `void print_tokens(token_t tokens);`
Takes in a list of `token_t`s in infix or *RPN* format, and prints them out. **NOTE** only usable if also including `cmathparser.dev.h`.

### `void print_expression_tree(expr_tree_t tree);`
Takes in an expression tree and prints the expression with included parenthesis for showing order of operations. **NOTE** only usable if also including `cmathparser.dev.h`.