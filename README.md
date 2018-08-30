# posist 
#detail of the project and steps to compile it

1. In my code(done using language C), First I define the structure of node i.e.

a)In structure of node we define following variables i.e timestamp,data,nodeNumber,nodeId,refernceNodeId,childReferenceNodeId,genesisReferenceNodeId and Hash

b)The value of HashValue variable is the set of all other variables and hash value of previous node.


2. Then after, we make a function named as Insert and we pass the arguments of address of parent Node and data.

a)If node is NULL(means there is no parent node) then we create a new node like as GenesisNode


3. If node is not NULL(means there is a parent node) then we create a new node but it is like as childNode.


4.Then after there is a hash function that returns the hash value ,so we encrypt and decrypt this hash value using one key named 
as password.


5. We can check the integrity of data by calculating their hash values. 

a)If hash value matches means there is no change in data. 

b)And If hash value don't matches then it prints someone is changes the data.

6. If you want to edit the value of node then you can change but accordingly to it their hash value also changes.


#Steps to compile it

You can run code on Code Blocks or in any online platform. 
