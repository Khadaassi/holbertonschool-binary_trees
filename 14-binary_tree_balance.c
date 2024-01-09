#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* mesure la hauteur d'un arbre binaire
* @tree: pointer to the root node of the tree to measure the height
*
* Return: height of the tree if tree is not NULL, 0 otherwise
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

    /* Recursively calculate the height of the left and right subtrees */
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

    /* Return the maximum of the two heights, plus 1 for the current level */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* mesure le facteur d'équilibre d'un arbre binaire
* @tree: pointer to the root node of the tree to measure the balance factor
*
* Calculates balance factor of a binary tree *
* If tree is NULL, the function returns 0.
*
* Return: balance factor of the tree if tree is not NULL, 0 otherwise
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Calculate balance factor by height difference of subtrees */
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
