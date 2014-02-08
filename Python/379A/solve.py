candles, need = map(int, input().split())

hours = candles
stock = 0

if candles < need:
    print(hours)
else:

    while True:
        if candles % need == 0:
            candles //= need
        elif (candles + stock) % need == 0:
            candles = (candles + stock) // need
            stock = 0
        elif need - candles % need <= stock:
            candles = (candles + need) // need
            stock -= need - candles % need
        else:
            remainder = candles % need
            stock += remainder
            candles = (candles - remainder) // need
        hours += candles

        if candles < 1:
            break

    print(hours)