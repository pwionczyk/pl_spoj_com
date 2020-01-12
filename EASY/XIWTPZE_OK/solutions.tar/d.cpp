/* Solution for Inspectors, J.K. */

#include <stdio.h>
#include <stdlib.h>

#define DEBUG 0

struct nodestr {
  int price ; /* cost to get to this node from CCS */
  struct nodestr *next ;
  int numedgesto ; /* edges to this node */
  int numedgesfrom ;
  struct edgestr *edges ; /* edges from this node */
  struct edgestr *edgesto ; /* edges to this node */
} *nodes,*list ;

struct edgestr {
  struct nodestr *from,*to ;
  struct edgestr *next ;
  struct edgestr *nextr ;
  int price ;
} *edges ;

int m,n ;

#define INF 1000000000L

int findcost()
{ struct nodestr *p ;
  struct edgestr *q ;
  int sum ;

  list->price=0 ;
  while(list) {
#if DEBUG
    printf("Examining node %d\n",list-nodes+1) ;
#endif
    p=list ; list=list->next ;
    /* for all edges going from this node */
    for(q=p->edges;q;q=q->next) {
#if DEBUG
      printf("Edge %d->%d for %d\n",q->from-nodes+1,q->to-nodes+1,q->price) ;
#endif
      if (q->to==nodes) continue ; /* ignore edges to CCS */
      if (q->to->numedgesto) { /* unvisited node */
	if (q->to->price > p->price+q->price) { q->to->price=p->price+q->price ;
#if DEBUG
        printf("Price %d is %d\n",q->to-nodes+1,q->to->price) ; 
#endif
	}
	if (--(q->to->numedgesto)==0) { /* insert into list */
	  q->to->next=list ; list=q->to ; 
#if DEBUG
          printf("Added node %d\n",q->to-nodes+1) ;
#endif
	}
      } /* if (q->to->numedgesto) */
    } /* for */
  } /* while */
  
  for(sum=0,p=nodes;p<nodes+n;p++) sum+=p->price ;
  return sum ;
} /* function */

void solve()
{ int from,to,price,sum ; 
  struct nodestr *p,*r ;
  struct edgestr *q ;

  scanf("%d %d",&n,&m) ;
  nodes=malloc(n*sizeof(struct nodestr)) ;
  edges=malloc(m*sizeof(struct edgestr)) ;
 
  for(p=nodes;p<nodes+n;p++) {
    p->price=INF ; p->numedgesto=0 ;
    p->edges=NULL ; p->next=NULL ; 
    p->numedgesfrom=0 ; p->edgesto=NULL ;
  }

  list=nodes ; list->next=NULL ; 

  for(q=edges;q<edges+m;q++)
    { scanf("%d %d %d",&from,&to,&price) ;
      q->from=nodes+from-1 ;
      q->to=nodes+to-1 ;
      q->price=price ;
      q->to->numedgesto++ ;
      q->from->numedgesfrom++ ;
      q->next=q->from->edges ; q->from->edges=q ;
      q->nextr=q->to->edgesto ; q->to->edgesto=q ;
    }

  sum=findcost() ;
#if DEBUG
  printf("First pass gave %d\n",sum) ;
#endif
  /* reverse the graph */  
  for (p=nodes;p<nodes+n;p++) {
    p->numedgesto=p->numedgesfrom ;
    p->edges=p->edgesto ; p->price=INF ;
  }
  for(q=edges;q<edges+m;q++) {
    r=q->from ; q->from=q->to ; q->to=r ;
    q->next=q->nextr ;
  }

  list=nodes ; list->next=NULL ; 
  /* find the cost in the other direction and sum */
  printf("%d\n",sum+findcost()) ;

  free(nodes) ; free(edges) ;
}

int main(void) 
{ int c ;
  scanf("%d",&c) ;
  while(c--) solve() ;
  return 0 ;
}
