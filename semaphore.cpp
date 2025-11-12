#include "port.h"
#include "semaphore.h"
#include <unistd.h>
#include <stdlib.h>

Semaphore::Semaphore(int semKey, int numSems, int val)
 : m_semid(0)
 , m_semflg(IPC_CREAT | 0666)
 , m_semopen(false)
 , m_semKey(semKey)
 , m_numSems(numSems)
{
  m_arg.val = (0);
  if(val)
  {
    if(create(val))
      exit(1);
  }
}

int Semaphore::clear_sem()
{
  return 0;
}

int Semaphore::create(int count)
{
  return 0;
}

int Semaphore::get_semid()
{
  return 0;
}

int Semaphore::decrement_and_wait(int nr_sem)
{
  return 0;
}

int Semaphore::get_mutex()
{
  return 0;
}

int Semaphore::put_mutex()
{
  return 0;
}
