#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* insère un nœud en tant qu'enfant gauche d'un autre nœud
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	/* If the parent is NULL, we can't insert a new node, so we return NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node with the given value */
	new_left_node = binary_tree_node(parent, value);

	/* If the new node couldn't be created, return NULL */
	if (new_left_node == NULL)
		return (NULL);

	/* If the parent already has a left child */
	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}

	/* The new node is inserted as the left child of the parent */
	parent->left = new_left_node;

	/* Return a pointer to the new node */
	return (new_left_node);
}
