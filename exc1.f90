        program cs
        
        implicit none
        integer :: a
        
        print *, "Type in number"
        read *, a
        
        if (modulo(a,3) == 0 .and. modulo(a,5) == 0) then
                print *, "FizzBuzz"
        
        else if (modulo(a,5) == 0) then
                print *, "Fizz"
        else if (modulo(a,5) == 0) then
                print *, "Buzz"
        end if
        
        end program cs 
