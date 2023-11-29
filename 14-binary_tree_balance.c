#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: returns the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }
    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}