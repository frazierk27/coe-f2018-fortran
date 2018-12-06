        !collatz conjecture longest sequence
        program practice2
        
        implicit none
        
        integer :: u, i, counter
        !real :: u
        
       
        do i = 1, 1000
            counter = 0
            u = i
            print *, "Starting u:", u
                do while (u /= 1 )
                if (modulo(u,2) == 0) then
                    u = u/2
                else
                    u = 3*u + 1
                end if
                counter = counter + 1
                
                end do
                print *, "Sequence length", counter
        end do

        end program practice2
