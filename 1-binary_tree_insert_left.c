#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = NULL;
	binary_tree_t *old_left = NULL;

	if (parent == NULL)
		return (NULL);
//Redo malloc!
	if (parent != NULL)
	{
		if (parent->left != NULL)
		{
			old_left = parent->left;
			parent->left = new_left;
			new_left->left = old_left;
			new_left->n = value;
		}

	}
	if (new_left != NULL)
		return (new_left);
	else
		return (NULL);
}