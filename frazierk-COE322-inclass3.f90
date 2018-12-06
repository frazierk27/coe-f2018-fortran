        !Kevin Frazier
        !kjf833
        !In class challenge 3, fortran
        
        program Lab3
        
        implicit none
        integer :: a
        
        print *, "Enter a number"
        read *, a
         
        if (modulo(a,3) == 0 .and. modulo(a,5) /= 0) then
                print *, "Fizz"
        else if (modulo(a,3) /= 0 .and. modulo(a,5) == 0) then
                print *, "Buzz"
        else if (modulo(a,3) == 0 .and. modulo(a,5) == 0) then
                print *, "FizzBuzz"
        endif
        
        end program Lab3
                
         
