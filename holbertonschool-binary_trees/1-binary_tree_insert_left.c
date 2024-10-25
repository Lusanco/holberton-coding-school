#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left
 *
 * @parent: parent
 * @value: value
 *
 * Return: Null on failure, Pointer node on success.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = NULL;

	if (parent == NULL)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));

	if (new_left == NULL)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;

	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}

	parent->left = new_left;

	return (new_left);
}
