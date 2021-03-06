----Devin Fowler
----E01151306
----http://people.emich.edu/dfowle13/courses/Cosc341/HW1012.hs

----1

tail' (x : xs) = xs

----2

product' [] = 1
product' (x : xs) = x * product' xs

----3

cityblock (a,b) (c,d) = abs(a - c) + abs(b - d)

----4

euclid (a,b) (c,d) = sqrt((a - c)^2 + (b - d)^2)

----5

sum'' [] _ = []
sum'' _ [] = [] 
sum'' (x:xs) (y:ys) = x + y:sum'' xs ys

----6

zip' :: [a] -> [b] -> [(a,b)]
zip' _ [] = []
zip' [] _ = []
zip' (x:xs) (y:ys) = (x,y):zip' xs ys

----7

pickIt :: [t] -> [Bool] -> [t]
pickIt [] _ = []
pickIt _ [] = []
pickIt (x:xs) (y:ys)
       | y = x : pickIt xs ys
       | otherwise = pickIt xs ys

----8

pack [] = []
pack (x : xs)
     | snd x = x : pack xs
     | otherwise = pack xs

----9

ackermann :: Int -> Int -> Int
ackermann m  n
      | m == 0 = n + 1
      | m > 0 && n == 0 = ackermann (m-1) 1
      | otherwise = ackermann (m-1) $ ackermann m (n-1)
