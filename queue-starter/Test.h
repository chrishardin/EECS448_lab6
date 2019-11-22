#ifndef TEST_H
#define TEST_H
#include "Queue.h"
#include "QueueInterface.h"


class Test {

public:
  Test();
  ~Test();
  void runT();

private:

  bool t_peek_nonempty();
  bool t_isEmpty();
  bool t_notEmpty_once();
  bool t_notEmpty_multi();
  bool t_enqueue();
  bool t_enqueue_peek();
  bool t_dequeue_once();
  bool t_dequeue_multi();
  bool t_dequeue_peek();


};

#endif
