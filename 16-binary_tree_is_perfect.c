#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* mesure la hauteur d'un arbre binaire
* @tree: pointer to the root node of the tree to measure the height
*
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* The height of the tree is the maximum height of the subtrees plus 1 */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* binary_tree_size - measures the size of a binary tree
* mesure la taille d'un arbre binaire
* @tree: pointer to the root node of the tree to measure the size
*
* Return: size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Tree size is sum of left and right subtree sizes plus 1 */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* vérifie si un arbre binaire est parfait
* @tree: pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, perfect_size, i;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Calculate the height and size of the tree */
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/* Calculate the size of a perfect binary tree with the same height */
	perfect_size = 1;
	for (i = 0; i < height; i++)
		perfect_size *= 2;

	/* Return 1 if tree size equals perfect tree size, else 0. */
	return (size == perfect_size - 1);
}
