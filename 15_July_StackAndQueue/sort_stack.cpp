#include <bits/stdc++.h> 
void sortedInsert(stack<int> &stack, int x){
	// Base case
	if(stack.empty() || (!stack.empty() && stack.top() < x)){
		stack.push(x);
		return ;
	}

	int num = stack.top();
    stack.pop(); 

	// Recursive call
	sortedInsert(stack, x);

	stack.push(num);
}

void sortStack(stack<int> &stack)
{
	// Base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive Call
    sortStack(stack);

    sortedInsert(stack, num);
}