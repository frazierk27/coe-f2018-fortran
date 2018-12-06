        !comparing interest rates and different initial amounts
        program practice1
        
        implicit none
        
        integer :: k, i        
        real :: amount1, amount2, int1, int2
        
        k = 0
        amount1 = 100.
        amount2 = 200.
        int1 = .05
        int2 = .02
        
        do while (amount1 < amount2)
        !do i = 1, 20
                amount1 = amount1 + amount1*int1
                amount2 = amount2 + amount2*int2
                k = k + 1
        end do
        
        print *, "The number of years when the amount is the same is:",k
        print *, "Amount 1:", amount1, "Amount2:", amount2 
        end program practice1
