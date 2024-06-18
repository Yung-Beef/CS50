from numb3rs import validate

def test_validity():
    assert validate("123.123.123.123") == True
    assert validate("127.0.0.1") == True
    assert validate("255.255.255.255") == True
    assert validate("512.512.512.512") == False
    assert validate("256.123.123.123") == False
    assert validate("1.2.3.1000") == False

def test_text_or_punct():
    assert validate("123doinks") == False
    assert validate("123.!23.123.123") == False
