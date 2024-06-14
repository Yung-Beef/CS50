import seasons

def test_time_difference():
    assert seasons.time_difference("2024-06-13") == 1440
    assert seasons.time_difference("2023-06-15") == 525600
    assert seasons.time_difference("2024-06-14") == 0

def test_text_convert():
    assert seasons.text_convert(0) == "zero"
    assert seasons.text_convert(105240) == "one hundred five thousand, two hundred forty"
