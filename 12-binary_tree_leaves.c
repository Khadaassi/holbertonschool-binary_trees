#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* compte les feuilles d'un arbre binaire
* @tree: pointer to the root node of the tree to count the number of leaves
*
* This function counts the number of leaves in a binary tree.
* A leaf is a node with no children.
* If tree is NULL, the function returns 0.
*
* Return: number of leaves in a binary tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the node is a leaf (has no children), return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If not a leaf, count leaves in left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
