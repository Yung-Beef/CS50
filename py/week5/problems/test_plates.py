from plates import is_valid

def test_start_letters():
    assert is_valid("12AAAA") == False
    assert is_valid("5ABCDE") == False
    assert is_valid("A2BCDE") == False
    assert is_valid("AB12r3") == True

def test_length():
    assert is_valid("A") == False
    assert is_valid("bb") == True
    assert is_valid("aaaaaa") == True
    assert is_valid("aaaaaab") == False

def test_end_numbers():
    assert is_valid("a50aa") == False
    assert is_valid("aa02") == False
    assert is_valid("aaa30") == True

def test_no_punct():
    assert is_valid("a!@aa") == False
    assert is_valid("a%*.b") == False
