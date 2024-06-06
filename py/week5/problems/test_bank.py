from bank import value

def test_upper():
    assert value("Hello") == "$0"
    assert value("Hey") == "$20"
    assert value("Hank") == "$100"

def test_lower():
    assert value("hello") == "$0"
    assert value("hey") == "$20"
    assert value("hank") == "$100"

def test_number():
    assert value("5") == "$100"
    assert value("-10") == "$100"
    assert value("0") == "$100"