main :: IO ()

soma :: Int -> Int -> Int
soma x y = x + y

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    putStrLn $ id ("SOMA = " ++ show(soma a b))
