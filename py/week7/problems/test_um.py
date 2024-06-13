from um import count

def test_words():
    assert count("um") == 1
    assert count("bum") == 0
    assert count("umpire") == 0
    assert count("dumb") == 0

def test_punctuation():
    assert count("um,") == 1
    assert count(".um") == 1

def test_number_input():
    assert count("123") == 0
    assert count("12um34") == 0
    assert count("12 um 34") == 1
