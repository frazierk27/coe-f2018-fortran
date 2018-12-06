        !Homework 6
        !Kevin Frazier
        !kjf833
        
        !Program that reads a number and determines if it is prime
        program pe1
        implicit none
        logical :: isprime
        integer :: n
        
        print *, "Enter an integer"
        read *, n

        isprime = prime_test_function(n)
        
        print *, isprime

        if ( isprime == .true.) then
                print *, "It is prime"
        else
                print*, "It is not prime"
        end if

        contains 
        logical function prime_test_function(p)
                integer :: p,i
                real :: q
                prime_test_function = .true.
                do i = 2, (p-1)
                    q = modulo(p,i)
                    if (q == 0) then
                        prime_test_function = .false.
                    end if
                end do
        end function
        end program
