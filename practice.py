"""
^one = {"a","e","i","o","u"}
^two = {"u","o","i","a","e"}
?print(one==two) 
notes -
!!output it true which means order is not relevent in comparing sets
!!time complexity would be O(lenght of set)
!!write in copy while studying about sets

^one = [2,1,2]
^two = [1,2,2]
?print(one==two)
notes - 
!!output is false hence order is relevant while comparing lists

^one = [2,1,2]
^two = [2,1,2]
?print(one==two)
!output is true

^one = {2:1,1:1}
^two = {1:1,2:1}
?print(one==two)
!output is true
"""