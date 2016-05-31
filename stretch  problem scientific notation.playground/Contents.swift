//: Playground - noun: a place where people can play

import UIKit

var str = "Hello, playground"


func convertToScientificNotation(number: Float) -> String {
    
    let number = abs(number)
    let numberFormatter = NSNumberFormatter()
    numberFormatter.numberStyle = NSNumberFormatterStyle.ScientificStyle
    if number < 0 {
        numberFormatter.negativeFormat = "0.#E0"
    } else {
        numberFormatter.positiveFormat = "0.#E0"
    }
    numberFormatter.exponentSymbol = "*10^"
    
    return numberFormatter.stringFromNumber(number) ?? ""
    }
    

convertToScientificNotation(8.9)

