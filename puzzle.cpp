




/*

Create an initially empty queue of configurations.
    Insert the initial configuration into the queue.
    While
      the queue is not empty and
      the first configuration in the queue does not meet the goal,
    loop:
        Remove the first configuration from the queue and call it cfg.
        For each move applicable to cfg, loop:
            Make the move and enqueue the resulting
            configuration if it has not already been seen.
        end-loop.
    end-loop.
    The acceptable configuration is now at the head of the queue;
    but if the queue is empty, there is no solution to the problem.

*/
