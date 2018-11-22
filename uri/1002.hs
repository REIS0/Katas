module Main where
import Text.Printf

main :: IO ()

area :: Double -> Double
area x = 3.14159*(x*x)

main = do
    a <- readLn :: IO Double
    putStrLn $ id ("A=" ++ (printf "%.4f" (area a)))
