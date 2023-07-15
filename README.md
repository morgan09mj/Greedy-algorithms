# Greedy-algorithms
Solving problems with greedy algorithms

# questions:
## hoarding :
In a conversation with his friends in Bostan, Alex realized that dried fruit is going to be expensive.
So he took his basket and went to the grocery store. His son came to help him to buy the basket and take it home, but he doesn't want to cause his son trouble more than once. He should fill his basket with dried fruits in different ways so that he can spend the maximum possible amount of money by buying one basket and avoid the effect of inflation on the goods.
The seller tells him the price of products and inventory. You have to help Alex so that he can
Fill a basket while spending as much as possible.
Entrance :
In the first line, the number W (the maximum weight that the basket can hold) and then the number n
The products in the shop will be imported.
ci is entered as a non-negative integer, and in the second line, the number of available products, their corresponding cost
In the third line, the weight wi of a non-negative integer is entered. ) Note that ci is the total cost
is (wi
1≤ 𝑖 ≤𝑛
0 ≤ 𝑐𝑖, 𝑤𝑖 ≤ 10^4
Output:
The maximum amount of money that can be spent to fill the basket as a decimal output
It will be given .
Example 1:
input:
50 3
60 100 120
10 20 30
Output:
240
Explanation:             

![1_1](https://github.com/morgan09mj/Greedy-algorithms/assets/119484000/9484dd8d-f196-4a90-a7ef-221bc8ae67cb)

Example 2:
input:
15 7
10 5 15 7 6 18 3
2 3 5 7 1 4 1
Output:
55.33
Explanation:
Sha in the following expression and its relationship with filling W using i n to the way of choosing gender and gathering c
Be careful wi.   

![1_2](https://github.com/morgan09mj/Greedy-algorithms/assets/119484000/83b89a5b-9b78-44fb-9d14-e4dd1d3f2017)

## Collect signatures :
You are responsible for collecting signatures from all tenants of a particular building. For each tenant,
You know what time he is at home. You should get all the signatures as possible
Collect with the least number of references to the building. Mathematical model for this problem
The face is as follows. You have placed a set of intervals on a line and your goal is to find the least number of points on the line such that each interval contains at least one point.

![2](https://github.com/morgan09mj/Greedy-algorithms/assets/119484000/48b49c6b-8735-479f-b9fd-2c0a3118ea38)

Entrance :
The first line contains the number n, which specifies the number of intervals (in fact, it represents the number).
It is tenants. In the next n lines, in each line i, the first number ai is the beginning of the interval and the second number bi is the end of the interval.
1 ≤ 𝑛 ≤ 100
0 ≤ 𝑎𝑖 ≤ 𝑏𝑖 ≤ 10^9
0 ≤ 𝑖 ≤ 𝑛 − 1
Output:
Print the lowest number of references to the building - the lowest number of points - in the only output line.
Example 1:
input:
3
1 3
25
3 6
Output:
1
By visiting the building only once at t = 3, we can collect signatures from all tenants:
3 → 1 ≤ 3 ≤ 3, 2 ≤ 3 ≤ 5, 3 ≤ 3 ≤ 6
Example 2:
input:
4
4 7
1 3
25
5 6
Output:
2
By visiting twice at times t = 3 and t = 6, we can collect signatures from all tenants.
Note: Be careful that the question asks for the number of references, which is unique. In the event that
The question asked you for the time of all referrals, the answer to the problem could be different.
For example, in the second example, the times t = 3 and t = 5 could be correct times to refer to.

## fuel :
Arya and Amir want to go from city A to city B, which is located at a distance of d kilometers from city A
go On the road between these two cities, there are n number of fuel stations that they can use in each of them
Fill them with gas and fuel your car. Every time they fill up with gas, they can max
to move m kilometers and then their car will run out of gas. Since the appointment
Amir has to pay for the gas for this trip, he wants the least amount of refueling to happen
fall
Help Amir find the minimum amount of refueling from city A to city B. In other words
Entrance :
The first line contains the number d, which indicates the distance between two cities A and B.
In the second line, there is the number m, which represents the maximum distance that the car can travel with full fuel
go through
In the third line, the number n is the number of fuel stations on the route.
And in the next line there are n numbers separated by a space, which indicates the location of the i-th fuel station
be ) n ≥ i ≥ 1 ( .
In this line, the numbers stop1, stop2, ..., stop n are separated by a space.

![3_1](https://github.com/morgan09mj/Greedy-algorithms/assets/119484000/6cc15298-7bfc-4522-95af-dcdf1ea07612)

Output:
Find the minimum amount of refueling to get from city A to city B in the only exit line. At
If it is not possible to get from city A to city B according to m and the location of fuel stations, the number -1 will be printed in the output.
Note: The fuel level of the car is full at the beginning of the trip
Example 1:
input:
950
400
4
200 375 550 750
Output:
2
Explanation:
Distance between two cities: 950 km
The maximum distance that a car can travel with full fuel: 400 km, you can reach from city A to city B by refueling twice at the second and fourth gas station.
Example 2:
input:
10
3
4
1 2 5 9
Output:
-1
Explanation:
Considering that the distance of the fourth fuel station to the previous station (4) is more than the maximum distance
is that the car can travel with full fuel (3) It is never possible to reach from city A to city B.
Example 3:
input:
200
250
2
100 150
Output:
0
Explanation:
Since the car starts traveling with a full tank and the maximum distance it can travel with a full tank
The distance is 250 km, there is no need to refuel in the middle of the route.

## vow :
Irfan along with some of his friends are waiting in line to take the vows. Since mysticism and
His friends are always thinking about their family and want to take offerings for their family members.
But the problem is that the offering person feeds one person only once. Irfan and his friends
They know that the offering person needs 1 minute to feed a person.
They also know that, fortunately, the offerer forgets the offeree after m minutes
So Irfan and his friends decide that each of them will do it again after at least m minutes
take an offering
Now your task is that the minimum time that this row continues until Irfan and his friends
Find the size they need to take a vow.
Note: Be careful that the queue may be empty and no one is in the queue.
Entrance :
In the first line, the number m comes, which represents the period of time after which the offering person, the offering person
He forgets the recipient. (100 ≥ m ≥ 1)
In the second line n, the number of Irfan and his friends is expressed. (10000 ≥ n ≥ 1)
In the third line, there are n numbers separated by a space, where ai represents the amount of food needed by the i-th person. (n ≥ i ≥ 1) (it is guaranteed that the sum of ai's does not exceed 10000)
Output:
On the only output line, print the minimum amount of time the offering queue will last.
Example 1:
input:
2
2
3 3
Output:
8
Explanation:
The first line enters the period of time after which the offerer forgets the offeree
It is equal to 2. Also, the second line states that the number of Irfan and his friends is two
There are people and it is stated in the third line that A Erfan needs 3 meals and B his friend also needs 3 meals.

B → A → one minute the queue remains empty → B → A → one minute the queue remains empty → B →A

First, the first person (Irfan) takes his food after 1 minute and leaves the line.
Then it is the turn of the second person (his friend) and 1 minute later he takes his food and leaves the queue
goes . Now Irfan A can't enter the queue because the offering person will kill him after two minutes
He forgets while 1 minute has passed since he took the vow. That's why I have to
is to enter the queue one minute later and the queue is empty for 1 minute. for this
After 8 minutes, Irfan and his friend get the food they need.
Example 2:
input:
2
3
2 2 2
Output:
6

## fixed sum:
You are given an n-member array of natural numbers whose members are less than or equal to the number
are natural k. (n is an even number)
You can change the members of this array in such a way that every time you change one of the members
Select the array and replace it with a number in the range of 1 to k.
[1, k]
The goal is to find the least number of permutations of the array members so that the state
Let's find that the equation  ![5_1](https://github.com/morgan09mj/Greedy-algorithms/assets/119484000/3ef672a6-d545-4d8d-b39f-e3a9063e8815)   is true for every i from 1 to n/2. This means that the sum of all pairs that come at the same distance from the beginning and the end of the array should be a fixed number.
Entrance :
In the first line, the number t is stated, which represents the number of test cases. (1000 ≥ t ≥ 1)
In the first line of each test case, two numbers n, k are stated, which are respectively equal to the number of array members and
are the upper limit of the array. (200000 ≥ k ≥ 1, 200000 ≥ n ≥ 2)
In the second line of each test case, the ai's representing the array members are entered with a distance from each other.
1 ≤ 𝑖 ≤ 𝑛
1 ≤ 𝑎𝑖 ≤ 𝑘
Output:
For each test case, print the least number of replacements to reach the desired state.
Example 1:
input:
4
4 2
1 2 1 2
4 3
1 2 2 1
8 7
6 1 1 7 6 3 4 6
6 6
5 2 6 1 3 4
Output:
0
1
4
2
