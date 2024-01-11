#include "binary_trees.h"

/**
 * binary_tree_height - binary_tree_height
 *
 * @tree: tree
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left);

	if (tree->right)
		right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
