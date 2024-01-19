# C - Binary Trees

### Table of contents

- [Description](#description)
- [Files](#files)
- [Structure](#structure)
- [Resources](#resources)
- [Credits](#credits)

## Description

This is our submission project for *Holberton Coding School's* module of *C - Binary Trees*. In this module we worked and learned about what is a *binary tree*, what is the difference between a *Binary tree* and a *Binary Search Tree*, what is the possible gain in terms of *time complexity* compared to *linked lists*, what are the *depth*, the *height*, the *size* of a binary tree, what are the different *traversal methods* to go through a binary tree and what is a *complete*, a *full*, a *perfect* and a *balanced* binary tree.

## Files

- `README.md` - File that contains project description.
- `binary_trees.h` - Header file containing function prototypes.
- `0-binary_tree_node.c` - Function that creates a binary tree node.
- `1-binary_tree_insert_left.c` - Function that inserts a node as the left-child of another node.
- `2-binary_tree_insert_right.c` - Function that inserts a node as the right-child of another node.
- `3-binary_tree_delete.c` - Function that deletes an entire binary tree.
- `4-binary_tree_is_leaf.c` - Function that checks if a node is a leaf.
- `5-binary_tree_is_root.c` - Function that checks if a given node is a root.
- `6-binary_tree_preorder.c` - Function that goes through a binary tree using pre-order traversal.
- `7-binary_tree_inorder.c` - Function that goes through a binary tree using in-order traversal.
- `8-binary_tree_postorder.c` - Function that goes through a binary tree using post-order traversal.
- `9-binary_tree_height.c` - Function that measures the height of a binary tree.
- `10-binary_tree_depth.c` - Function that measures the depth of a node in a binary tree.
- `11-binary_tree_size.c` - Function that measures the size of a binary tree.
- `12-binary_tree_leaves.c` - Function that counts the leaves in a binary tree.
- `13-binary_tree_nodes.c` - Function that counts the leaves in a binary tree.
- `14-binary_tree_balance.c` - Function that measures the balance factor of a binary tree.
- `15-binary_tree_is_full.c` - Function that checks if a binary tree is full.
- `16-binary_tree_is_perfect.c` - Function that checks if a binary tree is perfect.
- `17-binary_tree_sibling.c` - Function that finds the sibling of a node.
- `18-binary_tree_uncle.c` -Function that finds the uncle of a node.

###

*`Main.c` files <ins>not</ins> included.*

##

To match the examples in the tasks, you are given this function:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/* Original code from http://stackoverflow.com/a/13755911/5184480 */

/**
 * print_t - Stores recursively each level in an array of strings
 *
 * @tree: Pointer to the node to print
 * @offset: Offset to print
 * @depth: Depth of the node
 * @s: Buffer
 *
 * Return: length of printed tree after process
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char b[6];
	int width, left, right, is_left, i;

	if (!tree)
		return (0);
	is_left = (tree->parent && tree->parent->left == tree);
	width = sprintf(b, "(%03d)", tree->n);
	left = print_t(tree->left, offset, depth + 1, s);
	right = print_t(tree->right, offset + left + width, depth + 1, s);
	for (i = 0; i < width; i++)
		s[depth][offset + left + i] = b[i];
	if (depth && is_left)
	{
		for (i = 0; i < width + right; i++)
			s[depth - 1][offset + left + width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !is_left)
	{
		for (i = 0; i < left + width; i++)
			s[depth - 1][offset - width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
}

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **s;
	size_t height, i, j;

	if (!tree)
		return;
	height = _height(tree);
	s = malloc(sizeof(*s) * (height + 1));
	if (!s)
		return;
	for (i = 0; i < height + 1; i++)
	{
		s[i] = malloc(sizeof(**s) * 255);
		if (!s[i])
			return;
		memset(s[i], 32, 255);
	}
	print_t(tree, 0, 0, s);
	for (i = 0; i < height + 1; i++)
	{
		for (j = 254; j > 1; --j)
		{
			if (s[i][j] != ' ')
				break;
			s[i][j] = '\0';
		}
		printf("%s\n", s[i]);
		free(s[i]);
	}
	free(s);
}
```

## Structure

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Resources

- *[Binary tree ](https://en.wikipedia.org/wiki/Binary_tree)*
- *[Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)*
- *[Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)*
- *[Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)*
- *[Data structures: Binary Tree](https://youtu.be/H5JubkIy_p8?si=CUFnGfe1TIhe-EN5)*

## Credits

- *[Jonathan Pérez](https://github.com/prodjohnper)*
- *[Luis Santiago](https://github.com/Lusanco)*
