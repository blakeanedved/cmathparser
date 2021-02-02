#ifdef _CMATHPARSER_H_
//{{{ Includes 
#include <stdio.h>
//}}}
//{{{ Functions 
//{{{ void print_tokens(token_t) 
void print_tokens(token_t tokens){
	token_t t = tokens;
	while (t != NULL){
		switch (t->type){
			case DOUBLE:
				printf("token = {\n\ttype: DOUBLE,\n\tdata: %f\n}\n", t->data);
				break;
			case PLUS:
				printf("token = {\n\ttype: PLUS,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case MINUS:
				printf("token = {\n\ttype: MINUS,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case MULTIPLICATION:
				printf("token = {\n\ttype: MULTIPLICATION,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case DIVISION:
				printf("token = {\n\ttype: DIVISION,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case MODULUS:
				printf("token = {\n\ttype: MODULUS,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case POWER:
				printf("token = {\n\ttype: POWER,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case LPAREN:
				printf("token = {\n\ttype: LPAREN,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case RPAREN:
				printf("token = {\n\ttype: RPAREN,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case SIN:
				printf("token = {\n\ttype: SIN,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case COS:
				printf("token = {\n\ttype: COS,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case TAN:
				printf("token = {\n\ttype: TAN,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case CSC:
				printf("token = {\n\ttype: CSC,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case SEC:
				printf("token = {\n\ttype: SEC,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case COT:
				printf("token = {\n\ttype: COT,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case ASIN:
				printf("token = {\n\ttype: ASIN,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case ACOS:
				printf("token = {\n\ttype: ACOS,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case ATAN:
				printf("token = {\n\ttype: ATAN,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case MIN:
				printf("token = {\n\ttype: MIN,\n\tprecedence: %d\n}\n", t->precedence);
				break;
			case MAX:
				printf("token = {\n\ttype: MAX,\n\tprecedence: %d\n}\n", t->precedence);
				break;
		}
		t = t->next;
	}
}
//}}}
//{{{ void print_expression_tree(expr_tree_t) 
void print_expression_tree(expr_tree_t tree){
	switch(tree->type){
		case DOUBLE: printf("%f", tree->data); break;
		case PLUS: printf("("); print_expression_tree(tree->left); printf("+"); print_expression_tree(tree->right); printf(")"); break;
		case MINUS: printf("("); print_expression_tree(tree->left); printf("-"); print_expression_tree(tree->right); printf(")"); break;
		case MULTIPLICATION: printf("("); print_expression_tree(tree->left); printf("*"); print_expression_tree(tree->right); printf(")"); break;
		case DIVISION: printf("("); print_expression_tree(tree->left); printf("/"); print_expression_tree(tree->right); printf(")"); break;
		case MODULUS: printf("("); print_expression_tree(tree->left); printf("%%"); print_expression_tree(tree->right); printf(")"); break;
		case POWER: printf("("); print_expression_tree(tree->left); printf("^"); print_expression_tree(tree->right); printf(")"); break;
		case SIN: printf("sin("); print_expression_tree(tree->left); printf(")"); break;
		case COS: printf("cos("); print_expression_tree(tree->left); printf(")"); break;
		case TAN: printf("tan("); print_expression_tree(tree->left); printf(")"); break;
		case CSC: printf("csc("); print_expression_tree(tree->left); printf(")"); break;
		case SEC: printf("sec("); print_expression_tree(tree->left); printf(")"); break;
		case COT: printf("cot("); print_expression_tree(tree->left); printf(")"); break;
		case ASIN: printf("asin("); print_expression_tree(tree->left); printf(")"); break;
		case ACOS: printf("acos("); print_expression_tree(tree->left); printf(")"); break;
		case ATAN: printf("atan("); print_expression_tree(tree->left); printf(")"); break;
		case MIN: printf("min("); print_expression_tree(tree->left); printf(","); print_expression_tree(tree->right); printf(")"); break;
		case MAX: printf("max("); print_expression_tree(tree->left); printf(","); print_expression_tree(tree->right); printf(")"); break;
	}
}
//}}}
//}}}
#endif
