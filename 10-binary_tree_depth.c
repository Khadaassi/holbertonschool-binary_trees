#include "binary_trees.h"

/**
* binary_tree_depth - function that measures the depth of a node
* in a binary tree.
* Fonction qui mesure la profondeur d'un noeud dans un arbre binaire.
* @tree: Pointer to the node to measure the depth.
*
* Return: Depth of the node.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* Initialize depth to 0 */
	size_t depth = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Loop through the tree, incrementing depth for each parent node */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	/* Return the calculated depth */
	return (depth);
}
