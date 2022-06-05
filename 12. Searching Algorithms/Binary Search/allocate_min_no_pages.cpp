/*
Allocate minimum number of pages

Given number of pages in n different books and m students. 
The books are arranged in ascending order of number of pages. 
Every student is assigned to read some consecutive books. 
The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum. 
Example : 
 

Input : pages[] = {12, 34, 67, 90}
        m = 2
Output : 113
Explanation:
There are 2 number of students. Books can be distributed 
in following fashion : 
  1) [12] and [34, 67, 90]
      Max number of pages is allocated to student 
      2 with 34 + 67 + 90 = 191 pages
  2) [12, 34] and [67, 90]
      Max number of pages is allocated to student
      2 with 67 + 90 = 157 pages 
  3) [12, 34, 67] and [90]
      Max number of pages is allocated to student 
      1 with 12 + 34 + 67 = 113 pages

Of the 3 cases, Option 3 has the minimum pages = 113.
*/ 

#include<bits/stdc++.h>
using namespace std;

/*
we need to minimise max no of pages that a student can read
so we need to search that minimised value 
and no of students can also differ so if there are less students then max no of pages a student can read will be more
and for more students, max pages a student can read will be less

eg. {10, 20 , 30, 40}
so for max students(4), each student will be given a book, so max pages a student can read is 40
and for min students(1), all books will be given to that student and max pages a student can read is (10+20+30+40=100)
so our ans lie between 40 to 100

so use binary search to find a value and check if its valid i.e. by allocating the pages acc to that criteria 
(max no pages a student can read) and checking if no of students required = no of given students

if all books can be allocated in desired no of students then the value (max no pages a student can read) can be ans
and we move left to minimise that value
*/

bool isValid(int A[], int size, int no, int max)
{
    int students=1; //count of students required for allocating all books acc to max no pages a student can read
    int sum=0; //pages for current student

    for (int i = 0; i < size; i++) //till all books are not allocated
    {
        sum+=A[i]; //add pages to current student

        if(sum > max) //check if pages not exceed the value (max no pages a student can read)
        {
            students++; //increase a student
            sum=A[i]; //now that new student has that no of pages due to which it exceeded max no pages a student can read
        }

/*
simultaneously checking each time if no of studens reqd > no of given students then criteria fails 
(bcz max no of pages student read is inversely proportional to no of students)
otherwise if students reqd == given students then criteria successful and to minimise we need to move left
and if students reqd < given students then also we need to decrease max no of pages student can read and we move left
*/

        if(students > no) 
            return false;
    }
    
    return true; //otherwise return true criteria successful
}

int maxPages(int A[], int size, int no)
{
    if(size < no) //it means no of books(size) < no of students so allocation not possible bcz each student should get atleast 1 book
        return -1;

    int start=A[size-1], end=0; 

    for (int i = 0; i < size; i++)
    {
        end+=A[i];
    }
    
    int mid, ans=-1;

    while (start <= end)
    {
        mid=start+(end-start)/2;

/*
if the value (max no of pages a student can read) is valid and allocation possible for given no students
then value can be ans but we need to minimise that value so we move left

otherwise if allocation not possible means we need large students and we have less students means we need to
increase max no of pages a student read (bcz max no of pages student read is inversely proportional to no of students)
so we move right
 */

        if(isValid(A, size, no, mid)) 
        {
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    
    return ans;
}

int main()
{
    int size;
    cin>>size;

    int A[size];
    
    for (int i = 0; i < size; i++)
    {
        cin>>A[i];
    }

    int no;
    cin>>no;
    
    cout<<maxPages(A, size, no);

    return 0;
}