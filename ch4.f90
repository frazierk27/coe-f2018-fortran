        !Kevin Frazier
        !kjf833
        !Class challenge 4, fortran
        
        program Lab4
        
        implicit none
        integer :: a,b
        
        print *, "Enter two numbers"
        read *, a, b
        
        if (modulo(b,a) == 0) then
                print *, a,"is a divisor of",b
        else
                print *, a, "is not a divisor of",b
        end if
        
        end program Lab4
