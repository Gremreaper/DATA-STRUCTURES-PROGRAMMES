//for validating a binary tree we must have 3 things---> only one root, not more than one parent,easily traversable to all nodes
/*
#include <bits/stdc++.h> 
bool validateBinaryTreeNodes(int n , vector<int>& leftChild, vector<int>& rightChild)
{
	//first of all find out the parents of all the nodes

	vector<int>parent(n,-1);
	for(int i=0;i<n;i++)
	{
		if(leftChild[i]!=-1)
		{
			if(parent[leftChild[i]]!=-1)
			{
				return false;
			}

			parent[leftChild[i]]=i;
		}

		if(rightChild[i]!=-1)
		{
			if(parent[rightChild[i]]!=-1)
			{
				return false;
			}

			parent[rightChild[i]]=i;
		}
	}

	//now find our root;
	int root=-1;
	for(int i=0;i<n;i++)
	{
		if(parent[i]==-1)
		{
			if(root==-1)
			{
				root=i;
			}else{
				return false;
			}
		}
	}

	if(root==-1)
	{
		return false;
	}

	unordered_set<int>visited;
	queue<int>q;
	q.push(root);
	visited.insert(root);

	while(!q.empty())
	{
		int node=q.front();
		q.pop();

		if(leftChild[node]!=-1 && visited.find(leftChild[node])==visited.end())
		{
			visited.insert(leftChild[node]);
			q.push(leftChild[node]);
		}

		if(rightChild[node]!=-1 && visited.find(rightChild[node])==visited.end())
		{
			visited.insert(rightChild[node]);
			q.push(rightChild[node]);
		}
	}

	return visited.size()==n;

}

*/