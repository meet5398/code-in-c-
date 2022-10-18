/*
stl:standard template library
library of what???
  |->generic classes and function 
why use stl?
    |---> reuse, well tested component
    |--> time saving 

    ****component of stl****
    1.container
      --store data , use templates
  
    2.algorithm
     ---sorting , searching,use template function
    3.iteration
     ---- object point to an element in container.
     ----handle just like pointer. 
     ----connect algorithm with container
     //STL IS USED BECAUSE IT IS GOOD IDEA 
     //NOT TO REINVENT THE WHEEL.

        @@---@-----@@---@@-----@@---@@@-----@@---@@----@@---@@@----@@---@--@^^^@
        ..---.-----..---..-----..---...-----..---..----..---...----..---.--.^^^.
        **---*-----**---**-----**---***-----**---**----**---***----**---*--*^^^*
        ##---#-----##---##-----##---##------##---##----##---###----##---#--#^^^##
        
     types of container
     1.sequence container
        --linear fashion example:vector,list,dequeue
     2.associative container:direct access(it's like  tree)||
       --ex:set/multi-set,map/multi-map
     3.derived container||-
       ---real world modeling
       ex:
          stack 
          queue priority queue
          
   when to use which container?
      1.SEQUENCE CONTAINER:
         *VECTOR
         RANDOM ACCESS FAST
         MIDDLE INSERTION AND DELETION SLOW
         DELETION AND INSERTION AT END IS FAST
         *LIST:
         random access slow
         middle insertion is fast
         deletion and insertion at the end is fast
     2.ASSOCIATIVE CONTAINER:
        all operation is fast except random access
    3. DERIVED CONTAINER:
          DEPENDS NOT FIXED        
         *LIST
  */  