/*

Amazon Fulfillment Builder is a new feature that enables Amazon warehouses to create new items to ship to customers out of smaller parts. As part of this project, Amazon wants to estimate the time it will take for a worker to create the item to be ready for a customer shipment.The Amazon Fulfillment Builder will provide an estimate about the time it will take for the item to be created based on the size of each of the parts. The worker can only combine two parts at a time. The time required to put two parts together is equal to the sum of the parts sizes. The size of the newly constructed part is also equal to the sum of the part's sizes. This process is repeated until all of the parts have been merged together to form the final product.Write an algorithm to output the minimum possible time to put the N parts together and build the final product.InputThe input to the function/method consists of one argument:parts, a list of integers representing the size of the parts.OutputReturn an integer representing the minimum time required to assemble all the parts.Constraints1 ≤ number of parts ≤ 1061 ≤ parts[i] ≤ 1060 ≤ i < number of partsNoteIf number of parts is one then return 0.ExampleInput:parts = [8, 4, 6, 12]Output:58Explanation:The optimal way to assemble the parts is as follows:Step 1: Assemble the parts of size 4 and 6 (time required is 10). Size of remaining parts after merging: [8, 10, 12].Step 2: Assemble the parts of size 8 and 10 (time required is 18). Size of remaining parts after merging: [18, 12].Step 3: Assemble the parts of size 18 and 12 (time required is 30).Total time required to assemble the parts is 10 + 18 + 30 = 58.

*/


int combineParts(vector<int> parts) {
    
    int ans = 0;
    // for (int x : parts)
    //     ans += x;
    priority_queue<int, vector<int>, greater<int>> pq(parts.begin(), parts.end());
    
    while (pq.size() > 1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        
        ans += (a+b);
        pq.push(a+b);            
    }
    
    return ans; 
}