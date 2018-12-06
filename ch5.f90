        !Kevin Frazier
        !kjf833
        !class challenge 5, fortran
        
        program Lab5
        
        implicit none
        
        integer :: u,v,w
        
        do u = 1, 100
                do v = 1, 100
                        do w = 1, 100
                                if (u**2 + v**2 == w**2) then
                                        print *, u,v,w
                                end if
                        
                        end do                
                end do
        
        end do

        end program Lab5
