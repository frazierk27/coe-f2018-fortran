        !Kevin Frazier
        !kjf833
        !Homework 7

        !Program that reads in an integer and prints that many prime
        !numbers
        program pe2
        implicit none
        integer :: n
        
        print *, "How many prime numbers to print?"
        read *, n
        call nprime(n)
                
        contains
        subroutine nprime(n)
        integer :: n, i, j, k, prime_count
        logical :: prime 
         
        prime_count = 0
        do i = 3, 10000 !i is number range to determine prime numbers
        prime = .true. !assume prime unless proven otherwise
            do j = 2, (i - 1)
                k = modulo(i,j)
                    if ( k == 0) then
                        prime = .false. !proven that it's not prime
                     end if
             end do
        if (prime == .true.) then
            prime_count = prime_count + 1
            print *, i
            
            if (prime_count == n) then
                exit                  !exit after print n prime numbers
            end if
        end if
        end do
        end subroutine nprime

        end program pe2


        
