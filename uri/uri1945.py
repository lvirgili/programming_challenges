def is_int(s):
    try: 
        int(s)
        return True
    except ValueError:
        return False

var = {}
name_order = []
while True:
    try:
        line = input()
        v, expr = line.split(" := ")
        name_order.append(v)
        if "+" in line:
            op1 = expr.split(" + ")[0]
            op2 = expr.split(" + ")[1]
            if is_int(op1):
                op1 = int(op1)
            else:
                op1 = var[op1]
            if is_int(op2):
                op2 = int(op2)
            else:
                op2 = var[op2]
            var[v] = op1 + op2
        else:
            if is_int(expr):
               var[v] = int(expr)
            else:
                var[v] = var[expr]
                
    except EOFError:
        break
    
print(var[name_order[-1]])