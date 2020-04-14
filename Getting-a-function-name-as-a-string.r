// link: https://stackoverflow.com/questions/1567718/getting-a-function-name-as-a-string/59153119#59153119

workingFunction <- Function(f)
{ functionName <- as.character(substitute(f)) }

workingFunction <- Function(f)
{ functionName <- deparse(substitute(f)) }
