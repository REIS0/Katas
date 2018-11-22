module Main where
import Text.Printf

main :: IO ()

media :: Double -> Double -> Double
media x y
   | x > 10 || y > 10 = 0
   | otherwise        = ((x*3.5) + (y*7.5)) / 11

main = do
    a <- readLn :: IO Double
    b <- readLn :: IO Double
    putStrLn $ id ("MEDIA = " ++ (printf "%.5f" (media a b)))
