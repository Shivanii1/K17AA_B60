/*PROBLEM_2:- 
Design a scheduling program to implements a Queue with two levels: 
Level 1 : Fixed priority preemptive Scheduling 
Level 2: Round Robin Scheduling 
For a Fixed priority preemptive Scheduling (Queue1), the Priority 0 is highest priority. If one process P1 is scheduled and running, another process P2 with higher priority comes. The New process (high priority) process P2 preempts currently running process P1 and process P1 will go to second level queue. Time for which process will strictly execute must be considered in the multiples of 2. All the processes in second level queue will complete their execution according to round robin scheduling. 
Consider: 1. Queue 2 will be processed after Queue 1 becomes empty.  
2. Priority of Queue 2 has lower priority than in Queue 1. */

CODE SNIPPET:-
#include<stdio.h> 
int main(){ 
      int counter = 0, TQ, i, lim, total = 0, x, ; 
      turnaround_time = 0, AT[10], BT[10], int wait_time = 0, temp[10]; 
      float average_turnaround_time ,AWT; 
      printf("Enter The Total Number of Processes:\t \n"); 
      scanf("%d", &lim); 
      x =lim; 
      for(i = 0; i < lim; i++) 
      { printf("Enter Details of Process[%d]\n", i+1);
            printf("Arrival Time:\t ");
            scanf("%d", &AT[i]);
            printf("Burst Time:\t");
            scanf("%d", &BT[i]); 
            temp[i] =BT[i];}
      printf("\nEnter Time Quantum:\t"); 
      scanf("%d", &TQ); 
      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
      for(total = 0, i = 0; x != 0;) 
      { if(temp[i] <= TQ && temp[i] > 0) 
            { total = total + temp[i]; 
                  temp[i] = 0; 
                  counter = 1;} 
            else if(temp[i] > 0) 
            {  temp[i] = temp[i] - TQ; 
                  total = total +TQ;    } 
            if(temp[i] == 0 && counter == 1) 
            { x-- ; 
      printf("\n Process[%d]\t %d \t %d \t %d", i + 1, BT[i], total - AT[i], total - AT[i] - BT[i]);
                  WT = WT + total - AT[i] - BT[i]; 
                  TT = TT + total - AT[i]; 
                  counter = 0; } 
            if(i == limit - 1) 
            {      i = 0 ;          }
            else if(AT[i + 1] <= total) 
            {    i++ ;  }
            else 
            { i = 0;  }
      } 
      AWT = WT * 1.0 / limit;
      AWT = TT * 1.0 / limit;
      printf("\n\n Average Waiting Time:\t %f", AWT); 
      printf("Avg Turnaround Time:\t %f \n", average_turnaround_time); 
      return (0) ; 
}




