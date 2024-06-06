from bank import value

def test_upper():
    assert value("Hello") == "$100"
    assert value("Hey") == "$100"
    assert value("Bank") == "$100"

def test_lower():
    assert value("hello") == "$0"
    assert value("hey") == "$20"
    assert value("bank") == "$100"

def test_number():
    assert value("5") == "$100"
    assert value("-10") == "$100"
    assert value("0") == "$100"
