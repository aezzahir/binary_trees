#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_size - measures the size of a node
 * @tree: pointer to the node to measure the size
 * Return: returns the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
{
    return (0);
}
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
