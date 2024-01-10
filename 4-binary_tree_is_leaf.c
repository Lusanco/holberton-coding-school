#include "binary_trees.h"

/**
 * binary_tree_is_leaf - binary_tree_is_leaf
 *
 * @node: node
 *
 * Return: int
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int pass_flag;

	if (node == NULL || node->left != NULL || node->right != NULL)
		pass_flag = 0;
	if (node->left == NULL && node->right == NULL)
		pass_flag = 1;
	return (pass_flag);
}
