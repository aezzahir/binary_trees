#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to the node to measure the depth
 * Return: returns the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	return (binary_tree_depth(tree->parent) + 1);
}
