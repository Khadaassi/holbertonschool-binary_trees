#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * insère un nœud en tant qu'enfant à droite d'un autre nœud
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

    /* If the parent is NULL, we can't insert a new node, so we return NULL */
	if (parent == NULL)
		return (NULL);

    /* Create a new node with the given value */
	new_right_node = binary_tree_node(parent, value);

    /* If the new node couldn't be created, return NULL */
	if (new_right_node == NULL)
		return (NULL);

    /* If the parent already has a right child */
	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}
	/* The new node is inserted as the right child of the parent */
	parent->right = new_right_node;

	return (new_right_node);
}
