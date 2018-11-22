module Main where

main :: IO ()

prod :: Int -> Int -> Int
prod x y = x * y

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    putStrLn $ id ("PROD = " ++ show(prod a b))
