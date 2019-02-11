#include "turtle-ast.h"

#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.141592653589793

struct ast_node *make_expr_value(double value) {
  struct ast_node *node = calloc(1, sizeof(struct ast_node));
  node->kind = KIND_EXPR_VALUE;
  node->u.value = value;
  return node;
}


void ast_node_destroy(struct tree_node *self) {
    if (self) {
        tree_destroy_node(self->right);
        self->right=NULL;
        tree_destroy_node(self->left);
        self->left=NULL;
        free(self);
    }
}

void ast_destroy(struct ast *self) {
        ast_node_destroy()(self->root);
    }

    void tree_destroy_node(struct tree_node *self)
    {
        if (self)
        {
            tree_destroy_node(self->right);
            self->right=NULL;
            tree_destroy_node(self->left);
            self->left=NULL;
            free(self);
        }
    }

}

/*
 * context
 */

void context_create(struct context *self) {

}

/*
 * eval
 */

void ast_eval(const struct ast *self, struct context *ctx) {

}

/*
 * print
 */

void ast_print(const struct ast *self) {

}
