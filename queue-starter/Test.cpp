#include "Queue.h"
#include "Test.h"
#include <iostream>

Test::Test(){}
Test::~Test(){}


bool Test::t_peek_nonempty()
{
  Queue temp;
  temp.enqueue(25);
  temp.enqueue(15);
  temp.enqueue(5);
  if(temp.peekFront() == 25)
  {
    std::cout << "Enqueued 25, 15, 5, peekFront was able to see 25. : PASSED. " << '\n';
    return true;
  } else {
    std::cout << "Enqueued 25, 15, 5, peekFront was able to see 25. : NOT PASSED. " << '\n';
    return false;
  }

}

bool Test::t_isEmpty()
{
  Queue temp;
  if(temp.isEmpty())
  {
    std::cout << "Queue is empty. : PASSED. " << '\n';
    return true;
  } else {
    std::cout << "Queue is empty. : NOT PASSED." << '\n';
    return false;
  }
}

bool Test::t_notEmpty_once()
{
  Queue temp;
  int n = 11;
  temp.enqueue(n);
  if(!temp.isEmpty())
  {
    std::cout << "Enqueued a value, Queue is not empty. : PASSED." << '\n';
    return true;
  } else {
    std::cout << "Enqueued a value, Queue is not empty. : NOT PASSED." << '\n';
    return false;
  }
}

bool Test::t_notEmpty_multi()
{
  Queue temp;
  int n = 11;
  int m = 22;
  temp.enqueue(n);
  temp.enqueue(m);
  if(!temp.isEmpty())
  {
    std::cout << "Multiple items are in queue. Queue is not empty. : PASSED." << '\n';
    return true;
  } else {
    std::cout << "Multiple items are in queue. Queue is not empty. : NOT PASSED." << '\n';
    return false;
  }
}

bool Test::t_enqueue()
{
  Queue temp;
  for(int i=0; i < 20; i++)
    temp.enqueue(i);
  if(!temp.isEmpty())
  {
    std::cout << "Enqueued 20 values, !isEmpty() should be true. : PASSED." << '\n';
    return true;
  } else {
    std::cout << "Enqueued 20 values, !isEmpty() should be true. : NOT PASSED." << '\n';
    return false;
  }
}

bool Test::t_enqueue_peek()
{
  Queue temp;
  for(int i=0; i < 20; i++)
    temp.enqueue(i);
  if(temp.peekFront() == 0)
  {
    std::cout << "Enqueued 20 values, peekFront should see 0 : PASSED." << '\n';
    return true;
  } else {
    std::cout << "Enqueued 20 values, peekFront should see 0  : NOT PASSED." << '\n';
    return false;
  }
}


bool Test::t_dequeue_once()
{
  Queue temp;
  for(int i=0; i < 20; i++)
    temp.enqueue(i);

  temp.dequeue();

  if(!temp.isEmpty())
  {
    std::cout << "Enqueued 20 values, dequeued once, queue should not be empty. : PASSED." << '\n';
    return true;
  } else {
    std::cout << "Enqueued 20 values, dequeued once, queue should not be empty. : NOT PASSED." << '\n';
    return false;
  }
}

bool Test::t_dequeue_multi()
{
  Queue temp;
  for(int i=0; i < 20; i++)
    temp.enqueue(i);

  for(int i=20; i > 0; i--)
    temp.dequeue();

  if(temp.isEmpty())
  {
    std::cout << "Enqueued 20 values, dequeued 20 times, queue should be empty. : PASSED." << '\n';
    return true;
  } else {
    std::cout << "Enqueued 20 values, dequeued 20 times, queue should be empty. : NOT PASSED." << '\n';
    return false;
  }
}

bool Test::t_dequeue_peek()
{
  Queue temp;
  for(int i=0; i <= 10; i++)
    temp.enqueue(i);

  temp.dequeue();
  temp.dequeue();
  temp.dequeue();

  if(temp.peekFront() == 4)
  {
    std::cout << "Enqueued 10 values, dequeued 3 times, peekFront sees 4. : PASSED." << '\n';
    return true;
  } else {
    std::cout << "Enqueued 10 values, dequeued 3 times, peekFront sees 4. : NOT PASSED." << '\n';
    return false;
  }

}

void Test::runT()
{

  std::cout<< '\n' << "..Testing has begun.." << '\n'<< '\n';
  t_peek_nonempty();
  t_isEmpty();
  t_notEmpty_once();
  t_notEmpty_multi();
  t_enqueue();
  t_enqueue_peek();
  t_dequeue_once();
  t_dequeue_multi();
  t_dequeue_peek();

  std::cout<< '\n' << "..Testing has ended.." << '\n';

  std::cout<< '\n' << "| Bugs" << '\n' << "|-> peekFront()" << '\n' << "|-> Dequeue()" << '\n' << "|-> make clean"<< '\n'<< '\n' ;

  std::cout<< "| Memory leaks" << '\n' << "|-> make m" << '\n' << "|" << '\n' << "|-> total heap usage: 99 allocs, 26 frees, 75,280 bytes allocated"<< '\n'<< '\n' ;

  std::cout << "..Program closing.."<< '\n'<< '\n';

}
