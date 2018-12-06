        program subroutineexample
        implicit none
        
        integer :: i=2,j=3, i_old, j_old

        print*, i, j
        call swap(i,j,i_old,j_old)
        
        print*, i,j
        print*, "The old values were", i_old, j_old
        
        contains
        subroutine swap(i,j,i_old,j_old)
        integer, intent(inout):: i,j
        integer, intent(out):: i_old, j_old
        
        i_old = i
        j_old = j
        i = j_old
        j = i_old
        
        end subroutine swap

        end program 

